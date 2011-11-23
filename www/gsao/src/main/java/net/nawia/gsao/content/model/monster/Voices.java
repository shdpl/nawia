
package net.nawia.gsao.content.model.monster;

import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="voices">
 *   &lt;xs:complexType mixed="true">
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="voice" minOccurs="0" maxOccurs="unbounded"/>
 *     &lt;/xs:sequence>
 *     &lt;xs:attribute type="xs:short" name="speed"/>
 *     &lt;xs:attribute type="xs:short" name="interval"/>
 *     &lt;xs:attribute type="xs:short" use="required" name="chance"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Voices
{
    private List<Voice> voiceList = new ArrayList<Voice>();
    private Short speed;
    private Short interval;
    private short chance;

    /** 
     * Get the list of 'voice' element items.
     * 
     * @return list
     */
    public List<Voice> getVoiceList() {
        return voiceList;
    }

    /** 
     * Set the list of 'voice' element items.
     * 
     * @param list
     */
    public void setVoiceList(List<Voice> list) {
        voiceList = list;
    }

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
    public Short getInterval() {
        return interval;
    }

    /** 
     * Set the 'interval' attribute value.
     * 
     * @param interval
     */
    public void setInterval(Short interval) {
        this.interval = interval;
    }

    /** 
     * Get the 'chance' attribute value.
     * 
     * @return value
     */
    public short getChance() {
        return chance;
    }

    /** 
     * Set the 'chance' attribute value.
     * 
     * @param chance
     */
    public void setChance(short chance) {
        this.chance = chance;
    }
}
