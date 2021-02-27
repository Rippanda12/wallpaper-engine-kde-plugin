#pragma once
#include <memory>
#include <vector>
#include "pkg.h"
#include "object.h"
#include "WPRender.h"
#include "GLVertice.h"

namespace wallpaper
{

class WallpaperGL
{
public:
    static const fs::file_node& GetPkgfs(){
        return m_pkgfs;
    }
    WallpaperGL() {};
    ~WallpaperGL() {vertices_.Delete();};
	bool Init(void *get_proc_address(const char *));
    void Load(const std::string& pkg_path);
    void Render(uint fbo, int width, int height);
    void Clear();
	void SetAssets(const std::string& path);
    void SetObjEffNum(int obj, int eff);
    static int ObjNum() {return m_objnum;};
    static int EffNum() {return m_effnum;};

private:
    static fs::file_node m_pkgfs;
	std::string m_pkgPath;
    std::vector<std::unique_ptr<RenderObject>> m_objects;
	gl::VerticeArray vertices_;
	WPRender wpRender_;
	bool m_inited = false;
	bool m_loaded = false;
	int m_framecount = 0;
    // for debug
    static int m_objnum;
    static int m_effnum;
};

}
