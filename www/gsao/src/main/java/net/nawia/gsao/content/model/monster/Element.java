
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="element">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:integer" name="physicalPercent"/>
 *     &lt;xs:attribute type="xs:integer" name="icePercent"/>
 *     &lt;xs:attribute type="xs:integer" name="earthPercent"/>
 *     &lt;xs:attribute type="xs:integer" name="firePercent"/>
 *     &lt;xs:attribute type="xs:integer" name="energyPercent"/>
 *     &lt;xs:attribute type="xs:integer" name="holyPercent"/>
 *     &lt;xs:attribute type="xs:integer" name="deathPercent"/>
 *     &lt;xs:attribute type="xs:integer" name="drownPercent"/>
 *     &lt;xs:attribute type="xs:integer" name="lifeDrainPercent"/>
 *     &lt;xs:attribute type="xs:integer" name="manaDrainPercent"/>
 *     &lt;xs:attribute type="xs:integer" name="healingPercent"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Element
{
    private BigInteger physicalPercent;
    private BigInteger icePercent;
    private BigInteger earthPercent;
    private BigInteger firePercent;
    private BigInteger energyPercent;
    private BigInteger holyPercent;
    private BigInteger deathPercent;
    private BigInteger drownPercent;
    private BigInteger lifeDrainPercent;
    private BigInteger manaDrainPercent;
    private BigInteger healingPercent;

    /** 
     * Get the 'physicalPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getPhysicalPercent() {
        return physicalPercent;
    }

    /** 
     * Set the 'physicalPercent' attribute value.
     * 
     * @param physicalPercent
     */
    public void setPhysicalPercent(BigInteger physicalPercent) {
        this.physicalPercent = physicalPercent;
    }

    /** 
     * Get the 'icePercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getIcePercent() {
        return icePercent;
    }

    /** 
     * Set the 'icePercent' attribute value.
     * 
     * @param icePercent
     */
    public void setIcePercent(BigInteger icePercent) {
        this.icePercent = icePercent;
    }

    /** 
     * Get the 'earthPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getEarthPercent() {
        return earthPercent;
    }

    /** 
     * Set the 'earthPercent' attribute value.
     * 
     * @param earthPercent
     */
    public void setEarthPercent(BigInteger earthPercent) {
        this.earthPercent = earthPercent;
    }

    /** 
     * Get the 'firePercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getFirePercent() {
        return firePercent;
    }

    /** 
     * Set the 'firePercent' attribute value.
     * 
     * @param firePercent
     */
    public void setFirePercent(BigInteger firePercent) {
        this.firePercent = firePercent;
    }

    /** 
     * Get the 'energyPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getEnergyPercent() {
        return energyPercent;
    }

    /** 
     * Set the 'energyPercent' attribute value.
     * 
     * @param energyPercent
     */
    public void setEnergyPercent(BigInteger energyPercent) {
        this.energyPercent = energyPercent;
    }

    /** 
     * Get the 'holyPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getHolyPercent() {
        return holyPercent;
    }

    /** 
     * Set the 'holyPercent' attribute value.
     * 
     * @param holyPercent
     */
    public void setHolyPercent(BigInteger holyPercent) {
        this.holyPercent = holyPercent;
    }

    /** 
     * Get the 'deathPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getDeathPercent() {
        return deathPercent;
    }

    /** 
     * Set the 'deathPercent' attribute value.
     * 
     * @param deathPercent
     */
    public void setDeathPercent(BigInteger deathPercent) {
        this.deathPercent = deathPercent;
    }

    /** 
     * Get the 'drownPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getDrownPercent() {
        return drownPercent;
    }

    /** 
     * Set the 'drownPercent' attribute value.
     * 
     * @param drownPercent
     */
    public void setDrownPercent(BigInteger drownPercent) {
        this.drownPercent = drownPercent;
    }

    /** 
     * Get the 'lifeDrainPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getLifeDrainPercent() {
        return lifeDrainPercent;
    }

    /** 
     * Set the 'lifeDrainPercent' attribute value.
     * 
     * @param lifeDrainPercent
     */
    public void setLifeDrainPercent(BigInteger lifeDrainPercent) {
        this.lifeDrainPercent = lifeDrainPercent;
    }

    /** 
     * Get the 'manaDrainPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getManaDrainPercent() {
        return manaDrainPercent;
    }

    /** 
     * Set the 'manaDrainPercent' attribute value.
     * 
     * @param manaDrainPercent
     */
    public void setManaDrainPercent(BigInteger manaDrainPercent) {
        this.manaDrainPercent = manaDrainPercent;
    }

    /** 
     * Get the 'healingPercent' attribute value.
     * 
     * @return value
     */
    public BigInteger getHealingPercent() {
        return healingPercent;
    }

    /** 
     * Set the 'healingPercent' attribute value.
     * 
     * @param healingPercent
     */
    public void setHealingPercent(BigInteger healingPercent) {
        this.healingPercent = healingPercent;
    }
}
