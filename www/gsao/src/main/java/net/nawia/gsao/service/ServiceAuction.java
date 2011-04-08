package net.nawia.gsao.service;

public interface ServiceAuction {
	
	/**
	 * Puts an offer, for wishing to buy concrete House
	 * @param hid House to buy ID
	 * @param pid Buyer ID
	 * @param amount
	 * @return Offer ID
	 */
	//TODO: deferred int addOfferBuy(int hid, int pid, OfferBuy offer);

	/**
	 * Puts an offer, for wishing to sell concrete House
	 * @param hid House to buy ID
	 * @param pid Buyer ID
	 * @param amount
	 * @return Offer ID
	 */
	//TODO: deferred int addOfferSell(int hid, int pid, OfferSell offer);

	/**
	 * 
	 * @param pid
	 * @param offer
	 * @return
	 */
	//TODO: deferred int addOfferCustomBuy(int pid, OfferBuy offer);
	
	/**
	 * 
	 * @param pid
	 * @param offer
	 * @return
	 */
	//TODO: deferred int addOfferCustomSell(int pid, OfferSell offer);
	
}
