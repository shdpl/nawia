
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="attack">
 *   &lt;xs:complexType mixed="true">
 *     &lt;xs:choice>
 *       &lt;xs:element ref="attribute" minOccurs="0" maxOccurs="unbounded"/>
 *     &lt;/xs:choice>
 *     &lt;xs:attribute type="xs:string" name="monster"/>
 *     &lt;xs:attribute type="xs:boolean" name="target"/>
 *     &lt;xs:attribute type="xs:integer" name="start"/>
 *     &lt;xs:attribute type="xs:integer" name="spread"/>
 *     &lt;xs:attribute type="xs:integer" name="speedchange"/>
 *     &lt;xs:attribute type="xs:integer" name="speed"/>
 *     &lt;xs:attribute type="xs:integer" name="skill"/>
 *     &lt;xs:attribute type="xs:integer" name="shielding"/>
 *     &lt;xs:attribute type="xs:integer" name="range"/>
 *     &lt;xs:attribute type="xs:integer" name="radius"/>
 *     &lt;xs:attribute type="xs:integer" name="fire"/>
 *     &lt;xs:attribute type="xs:integer" name="poison"/>
 *     &lt;xs:attribute type="xs:integer" name="energy"/>
 *     &lt;xs:attribute type="xs:integer" name="drown"/>
 *     &lt;xs:attribute type="xs:integer" name="freeze"/>
 *     &lt;xs:attribute type="xs:integer" name="dazzle"/>
 *     &lt;xs:attribute type="xs:integer" name="curse"/>
 *     &lt;xs:attribute type="xs:string" use="required" name="name"/>
 *     &lt;xs:attribute type="xs:integer" name="min"/>
 *     &lt;xs:attribute type="xs:integer" name="max"/>
 *     &lt;xs:attribute type="xs:integer" name="length"/>
 *     &lt;xs:attribute type="xs:integer" name="item"/>
 *     &lt;xs:attribute type="xs:string" use="required" name="interval"/>
 *     &lt;xs:attribute type="xs:integer" name="fist"/>
 *     &lt;xs:attribute type="xs:integer" name="duration"/>
 *     &lt;xs:attribute type="xs:integer" name="distance"/>
 *     &lt;xs:attribute type="xs:integer" name="club"/>
 *     &lt;xs:attribute type="xs:integer" name="change"/>
 *     &lt;xs:attribute type="xs:integer" name="count"/>
 *     &lt;xs:attribute type="xs:string" name="chance"/>
 *     &lt;xs:attribute type="xs:integer" name="axe"/>
 *     &lt;xs:attribute type="xs:integer" name="attack"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Attack
{
    private List<Attribute> attributeList = new ArrayList<Attribute>();
    private String monster;
    private Boolean target;
    private BigInteger start;
    private BigInteger spread;
    private BigInteger speedchange;
    private BigInteger speed;
    private BigInteger skill;
    private BigInteger shielding;
    private BigInteger range;
    private BigInteger radius;
    private BigInteger fire;
    private BigInteger poison;
    private BigInteger energy;
    private BigInteger drown;
    private BigInteger freeze;
    private BigInteger dazzle;
    private BigInteger curse;
    private String name;
    private BigInteger min;
    private BigInteger max;
    private BigInteger length;
    private BigInteger item;
    private String interval;
    private BigInteger fist;
    private BigInteger duration;
    private BigInteger distance;
    private BigInteger club;
    private BigInteger change;
    private BigInteger count;
    private String chance;
    private BigInteger axe;
    private BigInteger attack;

    /** 
     * Get the list of 'attribute' element items.
     * 
     * @return list
     */
    public List<Attribute> getAttributeList() {
        return attributeList;
    }

    /** 
     * Set the list of 'attribute' element items.
     * 
     * @param list
     */
    public void setAttributeList(List<Attribute> list) {
        attributeList = list;
    }

    /** 
     * Get the 'monster' attribute value.
     * 
     * @return value
     */
    public String getMonster() {
        return monster;
    }

    /** 
     * Set the 'monster' attribute value.
     * 
     * @param monster
     */
    public void setMonster(String monster) {
        this.monster = monster;
    }

    /** 
     * Get the 'target' attribute value.
     * 
     * @return value
     */
    public Boolean getTarget() {
        return target;
    }

    /** 
     * Set the 'target' attribute value.
     * 
     * @param target
     */
    public void setTarget(Boolean target) {
        this.target = target;
    }

    /** 
     * Get the 'start' attribute value.
     * 
     * @return value
     */
    public BigInteger getStart() {
        return start;
    }

    /** 
     * Set the 'start' attribute value.
     * 
     * @param start
     */
    public void setStart(BigInteger start) {
        this.start = start;
    }

    /** 
     * Get the 'spread' attribute value.
     * 
     * @return value
     */
    public BigInteger getSpread() {
        return spread;
    }

    /** 
     * Set the 'spread' attribute value.
     * 
     * @param spread
     */
    public void setSpread(BigInteger spread) {
        this.spread = spread;
    }

    /** 
     * Get the 'speedchange' attribute value.
     * 
     * @return value
     */
    public BigInteger getSpeedchange() {
        return speedchange;
    }

    /** 
     * Set the 'speedchange' attribute value.
     * 
     * @param speedchange
     */
    public void setSpeedchange(BigInteger speedchange) {
        this.speedchange = speedchange;
    }

    /** 
     * Get the 'speed' attribute value.
     * 
     * @return value
     */
    public BigInteger getSpeed() {
        return speed;
    }

    /** 
     * Set the 'speed' attribute value.
     * 
     * @param speed
     */
    public void setSpeed(BigInteger speed) {
        this.speed = speed;
    }

    /** 
     * Get the 'skill' attribute value. Skill ID
     * 
     * @return value
     */
    public BigInteger getSkill() {
        return skill;
    }

    /** 
     * Set the 'skill' attribute value. Skill ID
     * 
     * @param skill
     */
    public void setSkill(BigInteger skill) {
        this.skill = skill;
    }

    /** 
     * Get the 'shielding' attribute value.
     * 
     * @return value
     */
    public BigInteger getShielding() {
        return shielding;
    }

    /** 
     * Set the 'shielding' attribute value.
     * 
     * @param shielding
     */
    public void setShielding(BigInteger shielding) {
        this.shielding = shielding;
    }

    /** 
     * Get the 'range' attribute value.
     * 
     * @return value
     */
    public BigInteger getRange() {
        return range;
    }

    /** 
     * Set the 'range' attribute value.
     * 
     * @param range
     */
    public void setRange(BigInteger range) {
        this.range = range;
    }

    /** 
     * Get the 'radius' attribute value.
     * 
     * @return value
     */
    public BigInteger getRadius() {
        return radius;
    }

    /** 
     * Set the 'radius' attribute value.
     * 
     * @param radius
     */
    public void setRadius(BigInteger radius) {
        this.radius = radius;
    }

    /** 
     * Get the 'fire' attribute value.
     * 
     * @return value
     */
    public BigInteger getFire() {
        return fire;
    }

    /** 
     * Set the 'fire' attribute value.
     * 
     * @param fire
     */
    public void setFire(BigInteger fire) {
        this.fire = fire;
    }

    /** 
     * Get the 'poison' attribute value.
     * 
     * @return value
     */
    public BigInteger getPoison() {
        return poison;
    }

    /** 
     * Set the 'poison' attribute value.
     * 
     * @param poison
     */
    public void setPoison(BigInteger poison) {
        this.poison = poison;
    }

    /** 
     * Get the 'energy' attribute value.
     * 
     * @return value
     */
    public BigInteger getEnergy() {
        return energy;
    }

    /** 
     * Set the 'energy' attribute value.
     * 
     * @param energy
     */
    public void setEnergy(BigInteger energy) {
        this.energy = energy;
    }

    /** 
     * Get the 'drown' attribute value.
     * 
     * @return value
     */
    public BigInteger getDrown() {
        return drown;
    }

    /** 
     * Set the 'drown' attribute value.
     * 
     * @param drown
     */
    public void setDrown(BigInteger drown) {
        this.drown = drown;
    }

    /** 
     * Get the 'freeze' attribute value.
     * 
     * @return value
     */
    public BigInteger getFreeze() {
        return freeze;
    }

    /** 
     * Set the 'freeze' attribute value.
     * 
     * @param freeze
     */
    public void setFreeze(BigInteger freeze) {
        this.freeze = freeze;
    }

    /** 
     * Get the 'dazzle' attribute value.
     * 
     * @return value
     */
    public BigInteger getDazzle() {
        return dazzle;
    }

    /** 
     * Set the 'dazzle' attribute value.
     * 
     * @param dazzle
     */
    public void setDazzle(BigInteger dazzle) {
        this.dazzle = dazzle;
    }

    /** 
     * Get the 'curse' attribute value.
     * 
     * @return value
     */
    public BigInteger getCurse() {
        return curse;
    }

    /** 
     * Set the 'curse' attribute value.
     * 
     * @param curse
     */
    public void setCurse(BigInteger curse) {
        this.curse = curse;
    }

    /** 
     * Get the 'name' attribute value.
     * 
     * @return value
     */
    public String getName() {
        return name;
    }

    /** 
     * Set the 'name' attribute value.
     * 
     * @param name
     */
    public void setName(String name) {
        this.name = name;
    }

    /** 
     * Get the 'min' attribute value.
     * 
     * @return value
     */
    public BigInteger getMin() {
        return min;
    }

    /** 
     * Set the 'min' attribute value.
     * 
     * @param min
     */
    public void setMin(BigInteger min) {
        this.min = min;
    }

    /** 
     * Get the 'max' attribute value.
     * 
     * @return value
     */
    public BigInteger getMax() {
        return max;
    }

    /** 
     * Set the 'max' attribute value.
     * 
     * @param max
     */
    public void setMax(BigInteger max) {
        this.max = max;
    }

    /** 
     * Get the 'length' attribute value.
     * 
     * @return value
     */
    public BigInteger getLength() {
        return length;
    }

    /** 
     * Set the 'length' attribute value.
     * 
     * @param length
     */
    public void setLength(BigInteger length) {
        this.length = length;
    }

    /** 
     * Get the 'item' attribute value. lookTypeEx ID
     * 
     * @return value
     */
    public BigInteger getItem() {
        return item;
    }

    /** 
     * Set the 'item' attribute value. lookTypeEx ID
     * 
     * @param item
     */
    public void setItem(BigInteger item) {
        this.item = item;
    }

    /** 
     * Get the 'interval' attribute value.
     * 
     * @return value
     */
    public String getInterval() {
        return interval;
    }

    /** 
     * Set the 'interval' attribute value.
     * 
     * @param interval
     */
    public void setInterval(String interval) {
        this.interval = interval;
    }

    /** 
     * Get the 'fist' attribute value.
     * 
     * @return value
     */
    public BigInteger getFist() {
        return fist;
    }

    /** 
     * Set the 'fist' attribute value.
     * 
     * @param fist
     */
    public void setFist(BigInteger fist) {
        this.fist = fist;
    }

    /** 
     * Get the 'duration' attribute value.
     * 
     * @return value
     */
    public BigInteger getDuration() {
        return duration;
    }

    /** 
     * Set the 'duration' attribute value.
     * 
     * @param duration
     */
    public void setDuration(BigInteger duration) {
        this.duration = duration;
    }

    /** 
     * Get the 'distance' attribute value.
     * 
     * @return value
     */
    public BigInteger getDistance() {
        return distance;
    }

    /** 
     * Set the 'distance' attribute value.
     * 
     * @param distance
     */
    public void setDistance(BigInteger distance) {
        this.distance = distance;
    }

    /** 
     * Get the 'club' attribute value. skill modifier
     * 
     * @return value
     */
    public BigInteger getClub() {
        return club;
    }

    /** 
     * Set the 'club' attribute value. skill modifier
     * 
     * @param club
     */
    public void setClub(BigInteger club) {
        this.club = club;
    }

    /** 
     * Get the 'change' attribute value.
     * 
     * @return value
     */
    public BigInteger getChange() {
        return change;
    }

    /** 
     * Set the 'change' attribute value.
     * 
     * @param change
     */
    public void setChange(BigInteger change) {
        this.change = change;
    }

    /** 
     * Get the 'count' attribute value.
     * 
     * @return value
     */
    public BigInteger getCount() {
        return count;
    }

    /** 
     * Set the 'count' attribute value.
     * 
     * @param count
     */
    public void setCount(BigInteger count) {
        this.count = count;
    }

    /** 
     * Get the 'chance' attribute value. 
    					Issuing chance.
    				
     * 
     * @return value
     */
    public String getChance() {
        return chance;
    }

    /** 
     * Set the 'chance' attribute value. 
    					Issuing chance.
    				
     * 
     * @param chance
     */
    public void setChance(String chance) {
        this.chance = chance;
    }

    /** 
     * Get the 'axe' attribute value. skill modifier
     * 
     * @return value
     */
    public BigInteger getAxe() {
        return axe;
    }

    /** 
     * Set the 'axe' attribute value. skill modifier
     * 
     * @param axe
     */
    public void setAxe(BigInteger axe) {
        this.axe = axe;
    }

    /** 
     * Get the 'attack' attribute value. Attack strength. If 'attack' is used, you CAN use
    					'skill'.
    				
     * 
     * @return value
     */
    public BigInteger getAttack() {
        return attack;
    }

    /** 
     * Set the 'attack' attribute value. Attack strength. If 'attack' is used, you CAN use
    					'skill'.
    				
     * 
     * @param attack
     */
    public void setAttack(BigInteger attack) {
        this.attack = attack;
    }
}
