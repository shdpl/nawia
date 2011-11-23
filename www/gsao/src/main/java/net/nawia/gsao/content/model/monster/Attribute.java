
package net.nawia.gsao.content.model.monster;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="attribute">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute use="required" name="value">
 *       &lt;xs:simpleType>
 *         &lt;!-- Reference to inner class Value -->
 *       &lt;/xs:simpleType>
 *     &lt;/xs:attribute>
 *     &lt;xs:attribute use="required" name="key">
 *       &lt;xs:simpleType>
 *         &lt;!-- Reference to inner class Key -->
 *       &lt;/xs:simpleType>
 *     &lt;/xs:attribute>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Attribute
{
    private Value value;
    private Key key;

    /** 
     * Get the 'value' attribute value.
     * 
     * @return value
     */
    public Value getValue() {
        return value;
    }

    /** 
     * Set the 'value' attribute value.
     * 
     * @param value
     */
    public void setValue(Value value) {
        this.value = value;
    }

    /** 
     * Get the 'key' attribute value.
     * 
     * @return value
     */
    public Key getKey() {
        return key;
    }

    /** 
     * Set the 'key' attribute value.
     * 
     * @param key
     */
    public void setKey(Key key) {
        this.key = key;
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:simpleType xmlns:xs="http://www.w3.org/2001/XMLSchema">
     *   &lt;xs:restriction base="xs:string">
     *     &lt;xs:enumeration value="spear"/>
     *     &lt;xs:enumeration value="bolt"/>
     *     &lt;xs:enumeration value="arrow"/>
     *     &lt;xs:enumeration value="fire"/>
     *     &lt;xs:enumeration value="energy"/>
     *     &lt;xs:enumeration value="poisonarrow"/>
     *     &lt;xs:enumeration value="burstarrow"/>
     *     &lt;xs:enumeration value="throwingstar"/>
     *     &lt;xs:enumeration value="throwingknife"/>
     *     &lt;xs:enumeration value="smallstone"/>
     *     &lt;xs:enumeration value="death"/>
     *     &lt;xs:enumeration value="largerock"/>
     *     &lt;xs:enumeration value="snowball"/>
     *     &lt;xs:enumeration value="powerbolt"/>
     *     &lt;xs:enumeration value="poison"/>
     *     &lt;xs:enumeration value="infernalbolt"/>
     *     &lt;xs:enumeration value="huntingspear"/>
     *     &lt;xs:enumeration value="enchantedspear"/>
     *     &lt;xs:enumeration value="redstar"/>
     *     &lt;xs:enumeration value="greenstar"/>
     *     &lt;xs:enumeration value="royalspear"/>
     *     &lt;xs:enumeration value="sniperarrow"/>
     *     &lt;xs:enumeration value="onyxarrow"/>
     *     &lt;xs:enumeration value="piercingbolt"/>
     *     &lt;xs:enumeration value="whirlwindsword"/>
     *     &lt;xs:enumeration value="whirlwind"/>
     *     &lt;xs:enumeration value="whirlwindclub"/>
     *     &lt;xs:enumeration value="etherealspear"/>
     *     &lt;xs:enumeration value="ice"/>
     *     &lt;xs:enumeration value="earth"/>
     *     &lt;xs:enumeration value="holy"/>
     *     &lt;xs:enumeration value="suddendeath"/>
     *     &lt;xs:enumeration value="flasharrow"/>
     *     &lt;xs:enumeration value="flammingarrow"/>
     *     &lt;xs:enumeration value="shiverarrow"/>
     *     &lt;xs:enumeration value="energyball"/>
     *     &lt;xs:enumeration value="smallice"/>
     *     &lt;xs:enumeration value="smallholy"/>
     *     &lt;xs:enumeration value="smallearth"/>
     *     &lt;xs:enumeration value="eartharrow"/>
     *     &lt;xs:enumeration value="explosion"/>
     *     &lt;xs:enumeration value="cake"/>
     *     &lt;xs:enumeration value="redspark"/>
     *     &lt;xs:enumeration value="bluebubble"/>
     *     &lt;xs:enumeration value="poff"/>
     *     &lt;xs:enumeration value="yellowspark"/>
     *     &lt;xs:enumeration value="explosionarea"/>
     *     &lt;xs:enumeration value="explosion"/>
     *     &lt;xs:enumeration value="firearea"/>
     *     &lt;xs:enumeration value="yellowbubble"/>
     *     &lt;xs:enumeration value="greenbubble"/>
     *     &lt;xs:enumeration value="blackspark"/>
     *     &lt;xs:enumeration value="teleport"/>
     *     &lt;xs:enumeration value="energy"/>
     *     &lt;xs:enumeration value="blueshimmer"/>
     *     &lt;xs:enumeration value="redshimmer"/>
     *     &lt;xs:enumeration value="greenshimmer"/>
     *     &lt;xs:enumeration value="fire"/>
     *     &lt;xs:enumeration value="greenspark"/>
     *     &lt;xs:enumeration value="mortarea"/>
     *     &lt;xs:enumeration value="greennote"/>
     *     &lt;xs:enumeration value="rednote"/>
     *     &lt;xs:enumeration value="poison"/>
     *     &lt;xs:enumeration value="yellownote"/>
     *     &lt;xs:enumeration value="purplenote"/>
     *     &lt;xs:enumeration value="bluenote"/>
     *     &lt;xs:enumeration value="whitenote"/>
     *     &lt;xs:enumeration value="bubbles"/>
     *     &lt;xs:enumeration value="dice"/>
     *     &lt;xs:enumeration value="giftwraps"/>
     *     &lt;xs:enumeration value="yellowfirework"/>
     *     &lt;xs:enumeration value="redfirework"/>
     *     &lt;xs:enumeration value="bluefirework"/>
     *     &lt;xs:enumeration value="stun"/>
     *     &lt;xs:enumeration value="sleep"/>
     *     &lt;xs:enumeration value="watercreature"/>
     *     &lt;xs:enumeration value="groundshaker"/>
     *     &lt;xs:enumeration value="hearts"/>
     *     &lt;xs:enumeration value="fireattack"/>
     *     &lt;xs:enumeration value="energyarea"/>
     *     &lt;xs:enumeration value="smallclouds"/>
     *     &lt;xs:enumeration value="holydamage"/>
     *     &lt;xs:enumeration value="bigclouds"/>
     *     &lt;xs:enumeration value="icearea"/>
     *     &lt;xs:enumeration value="icetornado"/>
     *     &lt;xs:enumeration value="iceattack"/>
     *     &lt;xs:enumeration value="stones"/>
     *     &lt;xs:enumeration value="smallplants"/>
     *     &lt;xs:enumeration value="carniphila"/>
     *     &lt;xs:enumeration value="purpleenergy"/>
     *     &lt;xs:enumeration value="yellowenergy"/>
     *     &lt;xs:enumeration value="holyarea"/>
     *     &lt;xs:enumeration value="bigplants"/>
     *     &lt;xs:enumeration value="cake"/>
     *     &lt;xs:enumeration value="giantice"/>
     *     &lt;xs:enumeration value="watersplash"/>
     *     &lt;xs:enumeration value="plantattack"/>
     *     &lt;xs:enumeration value="tutorialarrow"/>
     *     &lt;xs:enumeration value="tutorialsquare"/>
     *     &lt;xs:enumeration value="mirrorhorizontal"/>
     *     &lt;xs:enumeration value="mirrorvertical"/>
     *     &lt;xs:enumeration value="skullhorizontal"/>
     *     &lt;xs:enumeration value="skullvertical"/>
     *     &lt;xs:enumeration value="assassin"/>
     *     &lt;xs:enumeration value="stepshorizontal"/>
     *     &lt;xs:enumeration value="bloodysteps"/>
     *     &lt;xs:enumeration value="stepsvertical"/>
     *     &lt;xs:enumeration value="yalaharighost"/>
     *     &lt;xs:enumeration value="bats"/>
     *     &lt;xs:enumeration value="smoke"/>
     *     &lt;xs:enumeration value="insects"/>
     *     &lt;xs:enumeration value="dragonhead"/>
     *     &lt;xs:enumeration value="mortarea"/>
     *     &lt;xs:enumeration value="arrow"/>
     *     &lt;xs:enumeration value="bigclouds"/>
     *     &lt;xs:enumeration value="bigplants"/>
     *     &lt;xs:enumeration value="blackSpark"/>
     *     &lt;xs:enumeration value="blackspark"/>
     *     &lt;xs:enumeration value="bluebubble"/>
     *     &lt;xs:enumeration value="bluenote"/>
     *     &lt;xs:enumeration value="blueshimmer"/>
     *     &lt;xs:enumeration value="bolt"/>
     *     &lt;xs:enumeration value="bubbles"/>
     *     &lt;xs:enumeration value="burstarrow"/>
     *     &lt;xs:enumeration value="cake"/>
     *     &lt;xs:enumeration value="carniphila"/>
     *     &lt;xs:enumeration value="death"/>
     *     &lt;xs:enumeration value="earth"/>
     *     &lt;xs:enumeration value="energy"/>
     *     &lt;xs:enumeration value="energyarea"/>
     *     &lt;xs:enumeration value="energyball"/>
     *     &lt;xs:enumeration value="explosion"/>
     *     &lt;xs:enumeration value="explosionarea"/>
     *     &lt;xs:enumeration value="fire"/>
     *     &lt;xs:enumeration value="firearea"/>
     *     &lt;xs:enumeration value="fireattack"/>
     *     &lt;xs:enumeration value="greenbubble"/>
     *     &lt;xs:enumeration value="greennote"/>
     *     &lt;xs:enumeration value="greenshimmer"/>
     *     &lt;xs:enumeration value="greenspark"/>
     *     &lt;xs:enumeration value="groundshaker"/>
     *     &lt;xs:enumeration value="hearts"/>
     *     &lt;xs:enumeration value="holyarea"/>
     *     &lt;xs:enumeration value="holydamage"/>
     *     &lt;xs:enumeration value="ice"/>
     *     &lt;xs:enumeration value="icearea"/>
     *     &lt;xs:enumeration value="iceattack"/>
     *     &lt;xs:enumeration value="icetornado"/>
     *     &lt;xs:enumeration value="largerock"/>
     *     &lt;xs:enumeration value="mortarea"/>
     *     &lt;xs:enumeration value="piercingbolt"/>
     *     &lt;xs:enumeration value="plantattack"/>
     *     &lt;xs:enumeration value="poff"/>
     *     &lt;xs:enumeration value="poison"/>
     *     &lt;xs:enumeration value="poisonarrow"/>
     *     &lt;xs:enumeration value="purpleenergy"/>
     *     &lt;xs:enumeration value="purplenote"/>
     *     &lt;xs:enumeration value="rednote"/>
     *     &lt;xs:enumeration value="redshimmer"/>
     *     &lt;xs:enumeration value="redspark"/>
     *     &lt;xs:enumeration value="sleep"/>
     *     &lt;xs:enumeration value="smallclouds"/>
     *     &lt;xs:enumeration value="smallearth"/>
     *     &lt;xs:enumeration value="smallholy"/>
     *     &lt;xs:enumeration value="smallice"/>
     *     &lt;xs:enumeration value="smallplants"/>
     *     &lt;xs:enumeration value="smallstone"/>
     *     &lt;xs:enumeration value="snowball"/>
     *     &lt;xs:enumeration value="spear"/>
     *     &lt;xs:enumeration value="stones"/>
     *     &lt;xs:enumeration value="stun"/>
     *     &lt;xs:enumeration value="suddendeath"/>
     *     &lt;xs:enumeration value="teleport"/>
     *     &lt;xs:enumeration value="throwingknife"/>
     *     &lt;xs:enumeration value="throwingstar"/>
     *     &lt;xs:enumeration value="watersplash"/>
     *     &lt;xs:enumeration value="whirlwindaxe"/>
     *     &lt;xs:enumeration value="whirlwindclub"/>
     *     &lt;xs:enumeration value="whirlwindsword"/>
     *     &lt;xs:enumeration value="whitenote"/>
     *     &lt;xs:enumeration value="yellowbubble"/>
     *     &lt;xs:enumeration value="yellowenergy"/>
     *     &lt;xs:enumeration value="yellownote"/>
     *     &lt;xs:enumeration value="yellowspark"/>
     *   &lt;/xs:restriction>
     * &lt;/xs:simpleType>
     * </pre>
     */
    public static enum Value {
        SPEAR("spear"), BOLT("bolt"), ARROW("arrow"), FIRE("fire"), ENERGY(
                "energy"), POISONARROW("poisonarrow"), BURSTARROW("burstarrow"), THROWINGSTAR(
                "throwingstar"), THROWINGKNIFE("throwingknife"), SMALLSTONE(
                "smallstone"), DEATH("death"), LARGEROCK("largerock"), SNOWBALL(
                "snowball"), POWERBOLT("powerbolt"), POISON("poison"), INFERNALBOLT(
                "infernalbolt"), HUNTINGSPEAR("huntingspear"), ENCHANTEDSPEAR(
                "enchantedspear"), REDSTAR("redstar"), GREENSTAR("greenstar"), ROYALSPEAR(
                "royalspear"), SNIPERARROW("sniperarrow"), ONYXARROW(
                "onyxarrow"), PIERCINGBOLT("piercingbolt"), WHIRLWINDSWORD(
                "whirlwindsword"), WHIRLWIND("whirlwind"), WHIRLWINDCLUB(
                "whirlwindclub"), ETHEREALSPEAR("etherealspear"), ICE("ice"), EARTH(
                "earth"), HOLY("holy"), SUDDENDEATH("suddendeath"), FLASHARROW(
                "flasharrow"), FLAMMINGARROW("flammingarrow"), SHIVERARROW(
                "shiverarrow"), ENERGYBALL("energyball"), SMALLICE("smallice"), SMALLHOLY(
                "smallholy"), SMALLEARTH("smallearth"), EARTHARROW("eartharrow"), EXPLOSION(
                "explosion"), CAKE("cake"), REDSPARK("redspark"), BLUEBUBBLE(
                "bluebubble"), POFF("poff"), YELLOWSPARK("yellowspark"), EXPLOSIONAREA(
                "explosionarea"), EXPLOSION1("explosion"), FIREAREA("firearea"), YELLOWBUBBLE(
                "yellowbubble"), GREENBUBBLE("greenbubble"), BLACKSPARK(
                "blackspark"), TELEPORT("teleport"), ENERGY1("energy"), BLUESHIMMER(
                "blueshimmer"), REDSHIMMER("redshimmer"), GREENSHIMMER(
                "greenshimmer"), FIRE1("fire"), GREENSPARK("greenspark"), MORTAREA(
                "mortarea"), GREENNOTE("greennote"), REDNOTE("rednote"), POISON1(
                "poison"), YELLOWNOTE("yellownote"), PURPLENOTE("purplenote"), BLUENOTE(
                "bluenote"), WHITENOTE("whitenote"), BUBBLES("bubbles"), DICE(
                "dice"), GIFTWRAPS("giftwraps"), YELLOWFIREWORK(
                "yellowfirework"), REDFIREWORK("redfirework"), BLUEFIREWORK(
                "bluefirework"), STUN("stun"), SLEEP("sleep"), WATERCREATURE(
                "watercreature"), GROUNDSHAKER("groundshaker"), HEARTS("hearts"), FIREATTACK(
                "fireattack"), ENERGYAREA("energyarea"), SMALLCLOUDS(
                "smallclouds"), HOLYDAMAGE("holydamage"), BIGCLOUDS("bigclouds"), ICEAREA(
                "icearea"), ICETORNADO("icetornado"), ICEATTACK("iceattack"), STONES(
                "stones"), SMALLPLANTS("smallplants"), CARNIPHILA("carniphila"), PURPLEENERGY(
                "purpleenergy"), YELLOWENERGY("yellowenergy"), HOLYAREA(
                "holyarea"), BIGPLANTS("bigplants"), CAKE1("cake"), GIANTICE(
                "giantice"), WATERSPLASH("watersplash"), PLANTATTACK(
                "plantattack"), TUTORIALARROW("tutorialarrow"), TUTORIALSQUARE(
                "tutorialsquare"), MIRRORHORIZONTAL("mirrorhorizontal"), MIRRORVERTICAL(
                "mirrorvertical"), SKULLHORIZONTAL("skullhorizontal"), SKULLVERTICAL(
                "skullvertical"), ASSASSIN("assassin"), STEPSHORIZONTAL(
                "stepshorizontal"), BLOODYSTEPS("bloodysteps"), STEPSVERTICAL(
                "stepsvertical"), YALAHARIGHOST("yalaharighost"), BATS("bats"), SMOKE(
                "smoke"), INSECTS("insects"), DRAGONHEAD("dragonhead"), MORTAREA1(
                "mortarea"), ARROW1("arrow"), BIGCLOUDS1("bigclouds"), BIGPLANTS1(
                "bigplants"), BLACK_SPARK("blackSpark"), BLACKSPARK1(
                "blackspark"), BLUEBUBBLE1("bluebubble"), BLUENOTE1("bluenote"), BLUESHIMMER1(
                "blueshimmer"), BOLT1("bolt"), BUBBLES1("bubbles"), BURSTARROW1(
                "burstarrow"), CAKE2("cake"), CARNIPHILA1("carniphila"), DEATH1(
                "death"), EARTH1("earth"), ENERGY2("energy"), ENERGYAREA1(
                "energyarea"), ENERGYBALL1("energyball"), EXPLOSION2(
                "explosion"), EXPLOSIONAREA1("explosionarea"), FIRE2("fire"), FIREAREA1(
                "firearea"), FIREATTACK1("fireattack"), GREENBUBBLE1(
                "greenbubble"), GREENNOTE1("greennote"), GREENSHIMMER1(
                "greenshimmer"), GREENSPARK1("greenspark"), GROUNDSHAKER1(
                "groundshaker"), HEARTS1("hearts"), HOLYAREA1("holyarea"), HOLYDAMAGE1(
                "holydamage"), ICE1("ice"), ICEAREA1("icearea"), ICEATTACK1(
                "iceattack"), ICETORNADO1("icetornado"), LARGEROCK1("largerock"), MORTAREA2(
                "mortarea"), PIERCINGBOLT1("piercingbolt"), PLANTATTACK1(
                "plantattack"), POFF1("poff"), POISON2("poison"), POISONARROW1(
                "poisonarrow"), PURPLEENERGY1("purpleenergy"), PURPLENOTE1(
                "purplenote"), REDNOTE1("rednote"), REDSHIMMER1("redshimmer"), REDSPARK1(
                "redspark"), SLEEP1("sleep"), SMALLCLOUDS1("smallclouds"), SMALLEARTH1(
                "smallearth"), SMALLHOLY1("smallholy"), SMALLICE1("smallice"), SMALLPLANTS1(
                "smallplants"), SMALLSTONE1("smallstone"), SNOWBALL1("snowball"), SPEAR1(
                "spear"), STONES1("stones"), STUN1("stun"), SUDDENDEATH1(
                "suddendeath"), TELEPORT1("teleport"), THROWINGKNIFE1(
                "throwingknife"), THROWINGSTAR1("throwingstar"), WATERSPLASH1(
                "watersplash"), WHIRLWINDAXE("whirlwindaxe"), WHIRLWINDCLUB1(
                "whirlwindclub"), WHIRLWINDSWORD1("whirlwindsword"), WHITENOTE1(
                "whitenote"), YELLOWBUBBLE1("yellowbubble"), YELLOWENERGY1(
                "yellowenergy"), YELLOWNOTE1("yellownote"), YELLOWSPARK1(
                "yellowspark");
        private final String value;

        private Value(String value) {
            this.value = value;
        }

        public String xmlValue() {
            return value;
        }

        public static Value convert(String value) {
            for (Value inst : values()) {
                if (inst.xmlValue().equals(value)) {
                    return inst;
                }
            }
            return null;
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:simpleType xmlns:xs="http://www.w3.org/2001/XMLSchema">
     *   &lt;xs:restriction base="xs:string">
     *     &lt;xs:enumeration value="areaeffect"/>
     *     &lt;xs:enumeration value="shooteffect"/>
     *   &lt;/xs:restriction>
     * &lt;/xs:simpleType>
     * </pre>
     */
    public static enum Key {
        AREAEFFECT("areaeffect"), SHOOTEFFECT("shooteffect");
        private final String value;

        private Key(String value) {
            this.value = value;
        }

        public String xmlValue() {
            return value;
        }

        public static Key convert(String value) {
            for (Key inst : values()) {
                if (inst.xmlValue().equals(value)) {
                    return inst;
                }
            }
            return null;
        }
    }
}
