// Copyright (c) 2012-2019 University of Lyon and CNRS (France).
// All rights reserved.
//
// This file is part of MEPP2; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published 
// by the Free Software Foundation; either version 3 of the License, 
// or (at your option) any later version.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

#pragma once

////////////////////////////////////////////////////////////////////////////////
#include "Visualization/PluginFilters/BasePluginDialogQt.h"
////////////////////////////////////////////////////////////////////////////////
namespace Ui {
class DialogBooleanOperations1;
}
////////////////////////////////////////////////////////////////////////////////
namespace FEVV {

class DialogBooleanOperations1 : public BasePluginDialogQt
{
  Q_OBJECT

public:
  explicit DialogBooleanOperations1(QWidget *parent = 0);
  ~DialogBooleanOperations1();

  void setParameters(const std::string &operation);
  void getParameters(std::string &operation);

protected slots:
  void onHelpTriggered() { helpTriggered(); }

private:
  Ui::DialogBooleanOperations1 *ui;
};

} // namespace FEVV

////////////////////////////////////////////////////////////////////////////////
