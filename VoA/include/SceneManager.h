#pragma once

#include "Scene.h"
#include <vector>

class SceneManager
{
private:
	std::vector<Scene *> _Scenes;
	Scene *_CurrScene;
public:
	SceneManager(void);
	~SceneManager(void);
	void Cleanup();
	void InitAll();
	void NewScene(char *name);
	void AddScene(Scene *scene);
	bool BindScene(char *name);
	std::vector<Scene *> GetAllScenes();
	Scene *GetSceneByName(char *name);
	char *GetCurrentSceneName();
	Scene *GetCurrentScene();
	void RenderScene();
	void RenderScene(char *);
};

extern SceneManager *SM;