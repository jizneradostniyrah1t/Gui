#include "GuiWindow.h"

#include <string>

class HelloGui : public GuiWindow {
public:
    HelloGui() = default;

    void drawGui() override {
        drawMyWindow();
        ImGui::ShowDemoWindow();
    }

    void drawMyWindow() {
        ImGui::Begin("Stats");
        {
            ImGui::Text("Hello %s", myName.c_str());

            if (ImGui::Button("Print Nice")) {
                printf("Hello\n");
            }
        }
        ImGui::End();
    }
private:
    std::string myName = "LAskjd";
};


int main() {

    HelloGui::initialize();

    {
        HelloGui window;
        window.run();
    }

    HelloGui::finalize();

    return 0;
}