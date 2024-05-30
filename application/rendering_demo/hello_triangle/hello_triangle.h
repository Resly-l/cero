#pragma once
#include "io/window/application.h"
#include "utility/timer.hpp"

class HelloTriangle : public io::window::Application
{
private:
	std::shared_ptr<io::graphics::Pipeline> pipeline_;
	std::shared_ptr<io::graphics::RenderTarget> renderTarget_;
	std::shared_ptr<io::graphics::Mesh> mesh_;
	std::shared_ptr<io::graphics::Mesh> mesh2_;

	utility::Timer<double> timer;

public:
	HelloTriangle();
	~HelloTriangle() override;

public:
	virtual void Update() override;
	virtual void Render() override;
};