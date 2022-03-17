/*
 * gBaseGUIObject.cpp
 *
 *  Created on: Aug 11, 2021
 *      Author: noyan
 */

#include "gBaseGUIObject.h"
#include "gBaseApp.h"


int gBaseGUIObject::lastid = -1;
gColor* gBaseGUIObject::backgroundcolor;
gColor* gBaseGUIObject::middlegroundcolor;
gColor* gBaseGUIObject::foregroundcolor;
gFont* gBaseGUIObject::font;
gColor* gBaseGUIObject::fontcolor;
gColor* gBaseGUIObject::buttoncolor;
gColor* gBaseGUIObject::pressedbuttoncolor;
gColor* gBaseGUIObject::disabledbuttoncolor;
gColor* gBaseGUIObject::buttonfontcolor;
gColor* gBaseGUIObject::pressedbuttonfontcolor;
gColor* gBaseGUIObject::disabledbuttonfontcolor;


gBaseGUIObject::gBaseGUIObject() {
	type = 0;
	lastid++;
	id = lastid;
	isenabled = true;
	parentslotlineno = -1;
	parentslotcolumnno = -1;
	left = 0;
	top = 0;
	right = 0;
	bottom = 0;
	width = 0;
	height = 0;
	isfocused = false;
	iscursoron = false;
}

gBaseGUIObject::~gBaseGUIObject() {
}

int gBaseGUIObject::getId() {
	return id;
}

int gBaseGUIObject::getType() {
	return type;
}

void gBaseGUIObject::setEnabled(bool isEnabled) {
	isenabled = isEnabled;
}

bool gBaseGUIObject::isEnabled() {
	return isenabled;
}

void gBaseGUIObject::setParent(gBaseGUIObject* parentGUIObject) {
	parent = parentGUIObject;
}

gBaseGUIObject* gBaseGUIObject::getParent() {
	return parent;
}

void gBaseGUIObject::setParentSlotNo(int parentSlotLineNo, int parentSlotColumnNo) {
	parentslotlineno = parentSlotLineNo;
	parentslotcolumnno = parentSlotColumnNo;
//	resetSize();
}

int gBaseGUIObject::getParentSlotLineNo() {
	return parentslotlineno;
}

int gBaseGUIObject::getParentSlotColumnNo() {
	return parentslotcolumnno;
}

void gBaseGUIObject::setTitle(std::string title) {
	this->title = title;
}

std::string gBaseGUIObject::getTitle() {
	return title;
}

void gBaseGUIObject::setBackgroundColor(gColor* backgroundColor) {
	backgroundcolor = backgroundColor;
}

void gBaseGUIObject::setMiddlegroundColor(gColor* middlegroundColor) {
	middlegroundcolor = middlegroundColor;
}

gColor* gBaseGUIObject::getBackgroundColor() {
	return backgroundcolor;
}

void gBaseGUIObject::setForegroundColor(gColor* foregroundColor) {
	foregroundcolor = foregroundColor;
}

gColor* gBaseGUIObject::getForegroundColor() {
	return foregroundcolor;
}

void gBaseGUIObject::setFont(gFont* font) {
	gBaseGUIObject::font = font;
}

gFont* gBaseGUIObject::getFont() {
	return font;
}

void gBaseGUIObject::setFontColor(gColor* fontColor) {
	fontcolor = fontColor;
}

gColor* gBaseGUIObject::getFontColor() {
	return fontcolor;
}

void gBaseGUIObject::setButtonColor(gColor* color) {
	buttoncolor = color;
}

gColor* gBaseGUIObject::getButtonColor() {
	return buttoncolor;
}

void gBaseGUIObject::setPressedButtonColor(gColor* color) {
	pressedbuttoncolor = color;
}

gColor* gBaseGUIObject::getPressedButtonColor() {
	return pressedbuttoncolor;
}

void gBaseGUIObject::setDisabledButtonColor(gColor* color) {
	disabledbuttoncolor = color;
}

gColor* gBaseGUIObject::getDisabledButtonColor() {
	return disabledbuttoncolor;
}

void gBaseGUIObject::setButtonFontColor(gColor* color) {
	buttonfontcolor = color;
}

gColor* gBaseGUIObject::getButtonFontColor() {
	return buttonfontcolor;
}

void gBaseGUIObject::setPressedButtonFontColor(gColor* color) {
	pressedbuttonfontcolor = color;
}

gColor* gBaseGUIObject::getPressedButtonFontColor() {
	return pressedbuttonfontcolor;
}

void gBaseGUIObject::setDisabledButtonFontColor(gColor* color) {
	disabledbuttonfontcolor = color;
}

gColor* gBaseGUIObject::getDisabledButtonFontColor() {
	return disabledbuttonfontcolor;
}

int gBaseGUIObject::getCursor(int x, int y) {
	return 0;
}

void gBaseGUIObject::keyPressed(int key) {

}

void gBaseGUIObject::keyReleased(int key) {

}

void gBaseGUIObject::charPressed(unsigned int codepoint) {

}

void gBaseGUIObject::mouseMoved(int x, int y) {

}

void gBaseGUIObject::mousePressed(int x, int y, int button) {

}

void gBaseGUIObject::mouseDragged(int x, int y, int button) {

}

void gBaseGUIObject::mouseReleased(int x, int y, int button) {

}

void gBaseGUIObject::mouseScrolled(int x, int y) {

}

void gBaseGUIObject::mouseEntered() {

}

void gBaseGUIObject::mouseExited() {

}

void gBaseGUIObject::windowResized(int w, int h) {

}

void gBaseGUIObject::setRootApp(gBaseApp* root) {
	this->root = root;
}
