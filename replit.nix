{ pkgs }: with pkgs; let paths = [
  SDL2.dev SDL2_image SDL2_ttf SDL2_net SDL2_gfx SDL2_sound SDL2_mixer
]; in {
	deps = [ clang_14 ccls gdb gnumake ] ++ paths;
  env = {
    CPLUS_INCLUDE_PATH = (builtins.concatStringsSep "/include/SDL2:" paths) + "/include/SDL2";
  };
}