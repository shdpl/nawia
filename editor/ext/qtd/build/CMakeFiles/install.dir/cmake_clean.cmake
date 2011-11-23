FILE(REMOVE_RECURSE
  "build"
  "CMakeFiles/install"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/install.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
