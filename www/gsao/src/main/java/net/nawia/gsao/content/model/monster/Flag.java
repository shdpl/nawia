
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="flag">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:string" name="targetdistance"/>
 *     &lt;xs:attribute type="xs:boolean" name="summonable"/>
 *     &lt;xs:attribute type="xs:integer" name="staticattack"/>
 *     &lt;xs:attribute type="xs:int" name="runonhealth"/>
 *     &lt;xs:attribute type="xs:boolean" name="pushable"/>
 *     &lt;xs:attribute type="xs:integer" name="lightlevel"/>
 *     &lt;xs:attribute type="xs:integer" name="lightcolor"/>
 *     &lt;xs:attribute type="xs:boolean" name="illusionable"/>
 *     &lt;xs:attribute type="xs:boolean" name="hostile"/>
 *     &lt;xs:attribute type="xs:boolean" name="hidehealth"/>
 *     &lt;xs:attribute type="xs:boolean" name="convinceable"/>
 *     &lt;xs:attribute type="xs:boolean" name="canpushitems"/>
 *     &lt;xs:attribute type="xs:boolean" name="canpushcreatures"/>
 *     &lt;xs:attribute type="xs:boolean" name="attackable"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Flag
{
    private String targetdistance;
    private Boolean summonable;
    private BigInteger staticattack;
    private Integer runonhealth;
    private Boolean pushable;
    private BigInteger lightlevel;
    private BigInteger lightcolor;
    private Boolean illusionable;
    private Boolean hostile;
    private Boolean hidehealth;
    private Boolean convinceable;
    private Boolean canpushitems;
    private Boolean canpushcreatures;
    private Boolean attackable;

    /** 
     * Get the 'targetdistance' attribute value.
     * 
     * @return value
     */
    public String getTargetdistance() {
        return targetdistance;
    }

    /** 
     * Set the 'targetdistance' attribute value.
     * 
     * @param targetdistance
     */
    public void setTargetdistance(String targetdistance) {
        this.targetdistance = targetdistance;
    }

    /** 
     * Get the 'summonable' attribute value.
     * 
     * @return value
     */
    public Boolean getSummonable() {
        return summonable;
    }

    /** 
     * Set the 'summonable' attribute value.
     * 
     * @param summonable
     */
    public void setSummonable(Boolean summonable) {
        this.summonable = summonable;
    }

    /** 
     * Get the 'staticattack' attribute value.
     * 
     * @return value
     */
    public BigInteger getStaticattack() {
        return staticattack;
    }

    /** 
     * Set the 'staticattack' attribute value.
     * 
     * @param staticattack
     */
    public void setStaticattack(BigInteger staticattack) {
        this.staticattack = staticattack;
    }

    /** 
     * Get the 'runonhealth' attribute value.
     * 
     * @return value
     */
    public Integer getRunonhealth() {
        return runonhealth;
    }

    /** 
     * Set the 'runonhealth' attribute value.
     * 
     * @param runonhealth
     */
    public void setRunonhealth(Integer runonhealth) {
        this.runonhealth = runonhealth;
    }

    /** 
     * Get the 'pushable' attribute value.
     * 
     * @return value
     */
    public Boolean getPushable() {
        return pushable;
    }

    /** 
     * Set the 'pushable' attribute value.
     * 
     * @param pushable
     */
    public void setPushable(Boolean pushable) {
        this.pushable = pushable;
    }

    /** 
     * Get the 'lightlevel' attribute value.
     * 
     * @return value
     */
    public BigInteger getLightlevel() {
        return lightlevel;
    }

    /** 
     * Set the 'lightlevel' attribute value.
     * 
     * @param lightlevel
     */
    public void setLightlevel(BigInteger lightlevel) {
        this.lightlevel = lightlevel;
    }

    /** 
     * Get the 'lightcolor' attribute value.
     * 
     * @return value
     */
    public BigInteger getLightcolor() {
        return lightcolor;
    }

    /** 
     * Set the 'lightcolor' attribute value.
     * 
     * @param lightcolor
     */
    public void setLightcolor(BigInteger lightcolor) {
        this.lightcolor = lightcolor;
    }

    /** 
     * Get the 'illusionable' attribute value.
     * 
     * @return value
     */
    public Boolean getIllusionable() {
        return illusionable;
    }

    /** 
     * Set the 'illusionable' attribute value.
     * 
     * @param illusionable
     */
    public void setIllusionable(Boolean illusionable) {
        this.illusionable = illusionable;
    }

    /** 
     * Get the 'hostile' attribute value.
     * 
     * @return value
     */
    public Boolean getHostile() {
        return hostile;
    }

    /** 
     * Set the 'hostile' attribute value.
     * 
     * @param hostile
     */
    public void setHostile(Boolean hostile) {
        this.hostile = hostile;
    }

    /** 
     * Get the 'hidehealth' attribute value.
     * 
     * @return value
     */
    public Boolean getHidehealth() {
        return hidehealth;
    }

    /** 
     * Set the 'hidehealth' attribute value.
     * 
     * @param hidehealth
     */
    public void setHidehealth(Boolean hidehealth) {
        this.hidehealth = hidehealth;
    }

    /** 
     * Get the 'convinceable' attribute value.
     * 
     * @return value
     */
    public Boolean getConvinceable() {
        return convinceable;
    }

    /** 
     * Set the 'convinceable' attribute value.
     * 
     * @param convinceable
     */
    public void setConvinceable(Boolean convinceable) {
        this.convinceable = convinceable;
    }

    /** 
     * Get the 'canpushitems' attribute value.
     * 
     * @return value
     */
    public Boolean getCanpushitems() {
        return canpushitems;
    }

    /** 
     * Set the 'canpushitems' attribute value.
     * 
     * @param canpushitems
     */
    public void setCanpushitems(Boolean canpushitems) {
        this.canpushitems = canpushitems;
    }

    /** 
     * Get the 'canpushcreatures' attribute value.
     * 
     * @return value
     */
    public Boolean getCanpushcreatures() {
        return canpushcreatures;
    }

    /** 
     * Set the 'canpushcreatures' attribute value.
     * 
     * @param canpushcreatures
     */
    public void setCanpushcreatures(Boolean canpushcreatures) {
        this.canpushcreatures = canpushcreatures;
    }

    /** 
     * Get the 'attackable' attribute value.
     * 
     * @return value
     */
    public Boolean getAttackable() {
        return attackable;
    }

    /** 
     * Set the 'attackable' attribute value.
     * 
     * @param attackable
     */
    public void setAttackable(Boolean attackable) {
        this.attackable = attackable;
    }
}
