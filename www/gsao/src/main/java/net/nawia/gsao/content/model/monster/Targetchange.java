
package net.nawia.gsao.content.model.monster;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="targetchange">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:short" name="speed"/>
 *     &lt;xs:attribute type="xs:string" name="interval"/>
 *     &lt;xs:attribute type="xs:byte" use="required" name="chance"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Targetchange
{
    private Short speed;
    private String interval;
    private byte chance;

    /** 
     * Get the 'speed' attribute value.
     * 
     * @return value
     */
    public Short getSpeed() {
        return speed;
    }

    /** 
     * Set the 'speed' attribute value.
     * 
     * @param speed
     */
    public void setSpeed(Short speed) {
        this.speed = speed;
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
     * Get the 'chance' attribute value.
     * 
     * @return value
     */
    public byte getChance() {
        return chance;
    }

    /** 
     * Set the 'chance' attribute value.
     * 
     * @param chance
     */
    public void setChance(byte chance) {
        this.chance = chance;
    }
}
