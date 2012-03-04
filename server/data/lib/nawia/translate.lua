Translate =
{
    table = {};
    locale = 'EN';
    localeDefault = 'EN';
    -- context = stack

    getString = function(str)
        return Translate.locale == Translate.localeDefault and str or Translate.table[Translate.locale][str];
    end
}