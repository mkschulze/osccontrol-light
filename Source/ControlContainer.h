/*

  oscsend-vst - An audio plugin that speaks OSC.
  Copyright (C) 2020 Patric Schmitz

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#pragma once

#include <list>

#include <JuceHeader.h>

class ControlElementUI;
using ControlElementUIUniq = std::unique_ptr<ControlElementUI>;

class ControlContainer :
    public Component
{
public:
    void resized() override;

    std::list<ControlElementUIUniq> & getElementList();

    OSCSender & getOSCSender();

private:
    std::list<ControlElementUIUniq> listControlElements;
    OSCSender oscSender;
};
using ControlContainerUniq = std::unique_ptr<ControlContainer>;
