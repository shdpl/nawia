
package net.nawia.gsao.content.model.monster;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="script">
 *   &lt;xs:complexType>
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="event"/>
 *     &lt;/xs:sequence>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Script
{
    private Event event;

    /** 
     * Get the 'event' element value.
     * 
     * @return value
     */
    public Event getEvent() {
        return event;
    }

    /** 
     * Set the 'event' element value.
     * 
     * @param event
     */
    public void setEvent(Event event) {
        this.event = event;
    }
}
