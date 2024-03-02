#include <Geode/Geode.hpp>
#include <Geode/modify/EditorPauseLayer.hpp>

using namespace geode::prelude;

class $modify(EditorPauseLayer) {
	void onSave(CCObject*) {
		FLAlertLayer::create("Geode", "Hello from my custom mod!", "OK")->show();
	}
};
