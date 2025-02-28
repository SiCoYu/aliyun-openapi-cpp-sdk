/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERVPNATTACHMENTREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERVPNATTACHMENTREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT CreateTransitRouterVpnAttachmentRequest : public RpcServiceRequest {
public:
	struct Zone {
		std::string zoneId;
	};
	CreateTransitRouterVpnAttachmentRequest();
	~CreateTransitRouterVpnAttachmentRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	bool getRouteTableAssociationEnabled() const;
	void setRouteTableAssociationEnabled(bool routeTableAssociationEnabled);
	std::string getTransitRouterAttachmentName() const;
	void setTransitRouterAttachmentName(const std::string &transitRouterAttachmentName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<Zone> getZone() const;
	void setZone(const std::vector<Zone> &zone);
	bool getAutoPublishRouteEnabled() const;
	void setAutoPublishRouteEnabled(bool autoPublishRouteEnabled);
	bool getRouteTablePropagationEnabled() const;
	void setRouteTablePropagationEnabled(bool routeTablePropagationEnabled);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getTransitRouterId() const;
	void setTransitRouterId(const std::string &transitRouterId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getTransitRouterAttachmentDescription() const;
	void setTransitRouterAttachmentDescription(const std::string &transitRouterAttachmentDescription);
	long getVpnOwnerId() const;
	void setVpnOwnerId(long vpnOwnerId);
	std::string getChargeType() const;
	void setChargeType(const std::string &chargeType);
	std::string getVpnId() const;
	void setVpnId(const std::string &vpnId);

private:
	long resourceOwnerId_;
	std::string clientToken_;
	std::string cenId_;
	bool routeTableAssociationEnabled_;
	std::string transitRouterAttachmentName_;
	std::string regionId_;
	std::vector<Zone> zone_;
	bool autoPublishRouteEnabled_;
	bool routeTablePropagationEnabled_;
	bool dryRun_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string transitRouterId_;
	std::string resourceType_;
	std::string transitRouterAttachmentDescription_;
	long vpnOwnerId_;
	std::string chargeType_;
	std::string vpnId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_CREATETRANSITROUTERVPNATTACHMENTREQUEST_H_
