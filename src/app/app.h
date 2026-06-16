#ifndef STARTUP_APP_APP_H_
#define STARTUP_APP_APP_H_
namespace startup::app {
class App final {
public:
  App() = delete;
  App(App &&) = delete;
  App &operator=(App &&) = delete;
  App(const App &) = delete;
  App &operator=(const App &) = delete;
  ~App() = delete;

  static void Run();
};
} // namespace startup::app
#endif // STARTUP_APP_APP_H_