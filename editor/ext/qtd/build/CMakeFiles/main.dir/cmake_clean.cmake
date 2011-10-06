FILE(REMOVE_RECURSE
  "build"
  "CMakeFiles/main"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/main.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
