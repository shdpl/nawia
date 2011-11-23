FILE(REMOVE_RECURSE
  "CMakeFiles/allpackages"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/allpackages.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
