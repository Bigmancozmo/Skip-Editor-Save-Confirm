#include <Geode/Geode.hpp>
#include <Geode/modify/EditorPauseLayer.hpp>

using namespace geode::prelude;

class $modify(EditorPauseLayer) {
	void onSave(CCObject* obj) {
		auto shouldSkip = Mod::get()->getSettingValue<bool>("skip-popup");
		auto resumeAfterSave = Mod::get()->getSettingValue<bool>("resume-on-save");
		
		if(shouldSkip){
			this->saveLevel();
		} else {
			EditorPauseLayer::onSave(obj);
		}
		
		if(resumeAfterSave){
			EditorPauseLayer::onResume(obj);
		}
	}
};
