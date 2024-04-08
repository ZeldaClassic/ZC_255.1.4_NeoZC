#pragma once

#include <gui/dialog.h>
#include "gui/radioset.h"
#include "gui/label.h"
#include <functional>
#include <string_view>

int32_t onPalFix();

class PaletteConvertDialog: public GUI::Dialog<PaletteConvertDialog>
{
public:
	enum class message { REFR_INFO, OK, CANCEL };

	PaletteConvertDialog() = default;

	std::shared_ptr<GUI::Widget> view() override;
	bool handleMessage(const GUI::DialogMessage<message>& msg);

private:
};
