﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes a work team of a vendor that does the a labelling
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SubscribedWorkteam">AWS
   * API Reference</a></p>
   */
  class SubscribedWorkteam
  {
  public:
    AWS_SAGEMAKER_API SubscribedWorkteam();
    AWS_SAGEMAKER_API SubscribedWorkteam(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SubscribedWorkteam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vendor that you have subscribed.</p>
     */
    inline const Aws::String& GetWorkteamArn() const{ return m_workteamArn; }
    inline bool WorkteamArnHasBeenSet() const { return m_workteamArnHasBeenSet; }
    inline void SetWorkteamArn(const Aws::String& value) { m_workteamArnHasBeenSet = true; m_workteamArn = value; }
    inline void SetWorkteamArn(Aws::String&& value) { m_workteamArnHasBeenSet = true; m_workteamArn = std::move(value); }
    inline void SetWorkteamArn(const char* value) { m_workteamArnHasBeenSet = true; m_workteamArn.assign(value); }
    inline SubscribedWorkteam& WithWorkteamArn(const Aws::String& value) { SetWorkteamArn(value); return *this;}
    inline SubscribedWorkteam& WithWorkteamArn(Aws::String&& value) { SetWorkteamArn(std::move(value)); return *this;}
    inline SubscribedWorkteam& WithWorkteamArn(const char* value) { SetWorkteamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the service provided by the vendor in the Amazon
     * Marketplace.</p>
     */
    inline const Aws::String& GetMarketplaceTitle() const{ return m_marketplaceTitle; }
    inline bool MarketplaceTitleHasBeenSet() const { return m_marketplaceTitleHasBeenSet; }
    inline void SetMarketplaceTitle(const Aws::String& value) { m_marketplaceTitleHasBeenSet = true; m_marketplaceTitle = value; }
    inline void SetMarketplaceTitle(Aws::String&& value) { m_marketplaceTitleHasBeenSet = true; m_marketplaceTitle = std::move(value); }
    inline void SetMarketplaceTitle(const char* value) { m_marketplaceTitleHasBeenSet = true; m_marketplaceTitle.assign(value); }
    inline SubscribedWorkteam& WithMarketplaceTitle(const Aws::String& value) { SetMarketplaceTitle(value); return *this;}
    inline SubscribedWorkteam& WithMarketplaceTitle(Aws::String&& value) { SetMarketplaceTitle(std::move(value)); return *this;}
    inline SubscribedWorkteam& WithMarketplaceTitle(const char* value) { SetMarketplaceTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the vendor in the Amazon Marketplace.</p>
     */
    inline const Aws::String& GetSellerName() const{ return m_sellerName; }
    inline bool SellerNameHasBeenSet() const { return m_sellerNameHasBeenSet; }
    inline void SetSellerName(const Aws::String& value) { m_sellerNameHasBeenSet = true; m_sellerName = value; }
    inline void SetSellerName(Aws::String&& value) { m_sellerNameHasBeenSet = true; m_sellerName = std::move(value); }
    inline void SetSellerName(const char* value) { m_sellerNameHasBeenSet = true; m_sellerName.assign(value); }
    inline SubscribedWorkteam& WithSellerName(const Aws::String& value) { SetSellerName(value); return *this;}
    inline SubscribedWorkteam& WithSellerName(Aws::String&& value) { SetSellerName(std::move(value)); return *this;}
    inline SubscribedWorkteam& WithSellerName(const char* value) { SetSellerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the vendor from the Amazon Marketplace.</p>
     */
    inline const Aws::String& GetMarketplaceDescription() const{ return m_marketplaceDescription; }
    inline bool MarketplaceDescriptionHasBeenSet() const { return m_marketplaceDescriptionHasBeenSet; }
    inline void SetMarketplaceDescription(const Aws::String& value) { m_marketplaceDescriptionHasBeenSet = true; m_marketplaceDescription = value; }
    inline void SetMarketplaceDescription(Aws::String&& value) { m_marketplaceDescriptionHasBeenSet = true; m_marketplaceDescription = std::move(value); }
    inline void SetMarketplaceDescription(const char* value) { m_marketplaceDescriptionHasBeenSet = true; m_marketplaceDescription.assign(value); }
    inline SubscribedWorkteam& WithMarketplaceDescription(const Aws::String& value) { SetMarketplaceDescription(value); return *this;}
    inline SubscribedWorkteam& WithMarketplaceDescription(Aws::String&& value) { SetMarketplaceDescription(std::move(value)); return *this;}
    inline SubscribedWorkteam& WithMarketplaceDescription(const char* value) { SetMarketplaceDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Marketplace product listing ID.</p>
     */
    inline const Aws::String& GetListingId() const{ return m_listingId; }
    inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }
    inline void SetListingId(const Aws::String& value) { m_listingIdHasBeenSet = true; m_listingId = value; }
    inline void SetListingId(Aws::String&& value) { m_listingIdHasBeenSet = true; m_listingId = std::move(value); }
    inline void SetListingId(const char* value) { m_listingIdHasBeenSet = true; m_listingId.assign(value); }
    inline SubscribedWorkteam& WithListingId(const Aws::String& value) { SetListingId(value); return *this;}
    inline SubscribedWorkteam& WithListingId(Aws::String&& value) { SetListingId(std::move(value)); return *this;}
    inline SubscribedWorkteam& WithListingId(const char* value) { SetListingId(value); return *this;}
    ///@}
  private:

    Aws::String m_workteamArn;
    bool m_workteamArnHasBeenSet = false;

    Aws::String m_marketplaceTitle;
    bool m_marketplaceTitleHasBeenSet = false;

    Aws::String m_sellerName;
    bool m_sellerNameHasBeenSet = false;

    Aws::String m_marketplaceDescription;
    bool m_marketplaceDescriptionHasBeenSet = false;

    Aws::String m_listingId;
    bool m_listingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
