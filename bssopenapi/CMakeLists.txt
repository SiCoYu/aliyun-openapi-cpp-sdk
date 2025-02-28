#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(bssopenapi_public_header 
	include/alibabacloud/bssopenapi/BssOpenApiClient.h
	include/alibabacloud/bssopenapi/BssOpenApiExport.h )

set(bssopenapi_public_header_model 
	include/alibabacloud/bssopenapi/model/AddAccountRelationRequest.h
	include/alibabacloud/bssopenapi/model/AddAccountRelationResult.h
	include/alibabacloud/bssopenapi/model/AllocateCostUnitResourceRequest.h
	include/alibabacloud/bssopenapi/model/AllocateCostUnitResourceResult.h
	include/alibabacloud/bssopenapi/model/ApplyInvoiceRequest.h
	include/alibabacloud/bssopenapi/model/ApplyInvoiceResult.h
	include/alibabacloud/bssopenapi/model/CancelOrderRequest.h
	include/alibabacloud/bssopenapi/model/CancelOrderResult.h
	include/alibabacloud/bssopenapi/model/ChangeResellerConsumeAmountRequest.h
	include/alibabacloud/bssopenapi/model/ChangeResellerConsumeAmountResult.h
	include/alibabacloud/bssopenapi/model/ConfirmRelationRequest.h
	include/alibabacloud/bssopenapi/model/ConfirmRelationResult.h
	include/alibabacloud/bssopenapi/model/ConvertChargeTypeRequest.h
	include/alibabacloud/bssopenapi/model/ConvertChargeTypeResult.h
	include/alibabacloud/bssopenapi/model/CreateAgAccountRequest.h
	include/alibabacloud/bssopenapi/model/CreateAgAccountResult.h
	include/alibabacloud/bssopenapi/model/CreateCostUnitRequest.h
	include/alibabacloud/bssopenapi/model/CreateCostUnitResult.h
	include/alibabacloud/bssopenapi/model/CreateInstanceRequest.h
	include/alibabacloud/bssopenapi/model/CreateInstanceResult.h
	include/alibabacloud/bssopenapi/model/CreateResellerUserQuotaRequest.h
	include/alibabacloud/bssopenapi/model/CreateResellerUserQuotaResult.h
	include/alibabacloud/bssopenapi/model/CreateResourcePackageRequest.h
	include/alibabacloud/bssopenapi/model/CreateResourcePackageResult.h
	include/alibabacloud/bssopenapi/model/CreateSavingsPlansInstanceRequest.h
	include/alibabacloud/bssopenapi/model/CreateSavingsPlansInstanceResult.h
	include/alibabacloud/bssopenapi/model/DeleteCostUnitRequest.h
	include/alibabacloud/bssopenapi/model/DeleteCostUnitResult.h
	include/alibabacloud/bssopenapi/model/DescribeInstanceBillRequest.h
	include/alibabacloud/bssopenapi/model/DescribeInstanceBillResult.h
	include/alibabacloud/bssopenapi/model/DescribePricingModuleRequest.h
	include/alibabacloud/bssopenapi/model/DescribePricingModuleResult.h
	include/alibabacloud/bssopenapi/model/DescribeResourceCoverageDetailRequest.h
	include/alibabacloud/bssopenapi/model/DescribeResourceCoverageDetailResult.h
	include/alibabacloud/bssopenapi/model/DescribeResourceCoverageTotalRequest.h
	include/alibabacloud/bssopenapi/model/DescribeResourceCoverageTotalResult.h
	include/alibabacloud/bssopenapi/model/DescribeResourcePackageProductRequest.h
	include/alibabacloud/bssopenapi/model/DescribeResourcePackageProductResult.h
	include/alibabacloud/bssopenapi/model/DescribeResourceUsageDetailRequest.h
	include/alibabacloud/bssopenapi/model/DescribeResourceUsageDetailResult.h
	include/alibabacloud/bssopenapi/model/DescribeResourceUsageTotalRequest.h
	include/alibabacloud/bssopenapi/model/DescribeResourceUsageTotalResult.h
	include/alibabacloud/bssopenapi/model/DescribeSavingsPlansCoverageDetailRequest.h
	include/alibabacloud/bssopenapi/model/DescribeSavingsPlansCoverageDetailResult.h
	include/alibabacloud/bssopenapi/model/DescribeSavingsPlansCoverageTotalRequest.h
	include/alibabacloud/bssopenapi/model/DescribeSavingsPlansCoverageTotalResult.h
	include/alibabacloud/bssopenapi/model/DescribeSavingsPlansUsageDetailRequest.h
	include/alibabacloud/bssopenapi/model/DescribeSavingsPlansUsageDetailResult.h
	include/alibabacloud/bssopenapi/model/DescribeSavingsPlansUsageTotalRequest.h
	include/alibabacloud/bssopenapi/model/DescribeSavingsPlansUsageTotalResult.h
	include/alibabacloud/bssopenapi/model/DescribeSplitItemBillRequest.h
	include/alibabacloud/bssopenapi/model/DescribeSplitItemBillResult.h
	include/alibabacloud/bssopenapi/model/EnableBillGenerationRequest.h
	include/alibabacloud/bssopenapi/model/EnableBillGenerationResult.h
	include/alibabacloud/bssopenapi/model/GetAccountRelationRequest.h
	include/alibabacloud/bssopenapi/model/GetAccountRelationResult.h
	include/alibabacloud/bssopenapi/model/GetCustomerAccountInfoRequest.h
	include/alibabacloud/bssopenapi/model/GetCustomerAccountInfoResult.h
	include/alibabacloud/bssopenapi/model/GetCustomerListRequest.h
	include/alibabacloud/bssopenapi/model/GetCustomerListResult.h
	include/alibabacloud/bssopenapi/model/GetOrderDetailRequest.h
	include/alibabacloud/bssopenapi/model/GetOrderDetailResult.h
	include/alibabacloud/bssopenapi/model/GetPayAsYouGoPriceRequest.h
	include/alibabacloud/bssopenapi/model/GetPayAsYouGoPriceResult.h
	include/alibabacloud/bssopenapi/model/GetResourcePackagePriceRequest.h
	include/alibabacloud/bssopenapi/model/GetResourcePackagePriceResult.h
	include/alibabacloud/bssopenapi/model/GetSubscriptionPriceRequest.h
	include/alibabacloud/bssopenapi/model/GetSubscriptionPriceResult.h
	include/alibabacloud/bssopenapi/model/InquiryPriceRefundInstanceRequest.h
	include/alibabacloud/bssopenapi/model/InquiryPriceRefundInstanceResult.h
	include/alibabacloud/bssopenapi/model/ModifyAccountRelationRequest.h
	include/alibabacloud/bssopenapi/model/ModifyAccountRelationResult.h
	include/alibabacloud/bssopenapi/model/ModifyCostUnitRequest.h
	include/alibabacloud/bssopenapi/model/ModifyCostUnitResult.h
	include/alibabacloud/bssopenapi/model/ModifyInstanceRequest.h
	include/alibabacloud/bssopenapi/model/ModifyInstanceResult.h
	include/alibabacloud/bssopenapi/model/QueryAccountBalanceRequest.h
	include/alibabacloud/bssopenapi/model/QueryAccountBalanceResult.h
	include/alibabacloud/bssopenapi/model/QueryAccountBillRequest.h
	include/alibabacloud/bssopenapi/model/QueryAccountBillResult.h
	include/alibabacloud/bssopenapi/model/QueryAccountTransactionDetailsRequest.h
	include/alibabacloud/bssopenapi/model/QueryAccountTransactionDetailsResult.h
	include/alibabacloud/bssopenapi/model/QueryAccountTransactionsRequest.h
	include/alibabacloud/bssopenapi/model/QueryAccountTransactionsResult.h
	include/alibabacloud/bssopenapi/model/QueryAvailableInstancesRequest.h
	include/alibabacloud/bssopenapi/model/QueryAvailableInstancesResult.h
	include/alibabacloud/bssopenapi/model/QueryBillRequest.h
	include/alibabacloud/bssopenapi/model/QueryBillResult.h
	include/alibabacloud/bssopenapi/model/QueryBillOverviewRequest.h
	include/alibabacloud/bssopenapi/model/QueryBillOverviewResult.h
	include/alibabacloud/bssopenapi/model/QueryBillToOSSSubscriptionRequest.h
	include/alibabacloud/bssopenapi/model/QueryBillToOSSSubscriptionResult.h
	include/alibabacloud/bssopenapi/model/QueryCashCouponsRequest.h
	include/alibabacloud/bssopenapi/model/QueryCashCouponsResult.h
	include/alibabacloud/bssopenapi/model/QueryCostUnitRequest.h
	include/alibabacloud/bssopenapi/model/QueryCostUnitResult.h
	include/alibabacloud/bssopenapi/model/QueryCostUnitResourceRequest.h
	include/alibabacloud/bssopenapi/model/QueryCostUnitResourceResult.h
	include/alibabacloud/bssopenapi/model/QueryCustomerAddressListRequest.h
	include/alibabacloud/bssopenapi/model/QueryCustomerAddressListResult.h
	include/alibabacloud/bssopenapi/model/QueryDPUtilizationDetailRequest.h
	include/alibabacloud/bssopenapi/model/QueryDPUtilizationDetailResult.h
	include/alibabacloud/bssopenapi/model/QueryEvaluateListRequest.h
	include/alibabacloud/bssopenapi/model/QueryEvaluateListResult.h
	include/alibabacloud/bssopenapi/model/QueryFinancialAccountInfoRequest.h
	include/alibabacloud/bssopenapi/model/QueryFinancialAccountInfoResult.h
	include/alibabacloud/bssopenapi/model/QueryInstanceBillRequest.h
	include/alibabacloud/bssopenapi/model/QueryInstanceBillResult.h
	include/alibabacloud/bssopenapi/model/QueryInstanceByTagRequest.h
	include/alibabacloud/bssopenapi/model/QueryInstanceByTagResult.h
	include/alibabacloud/bssopenapi/model/QueryInstanceGaapCostRequest.h
	include/alibabacloud/bssopenapi/model/QueryInstanceGaapCostResult.h
	include/alibabacloud/bssopenapi/model/QueryInvoicingCustomerListRequest.h
	include/alibabacloud/bssopenapi/model/QueryInvoicingCustomerListResult.h
	include/alibabacloud/bssopenapi/model/QueryMonthlyBillRequest.h
	include/alibabacloud/bssopenapi/model/QueryMonthlyBillResult.h
	include/alibabacloud/bssopenapi/model/QueryMonthlyInstanceConsumptionRequest.h
	include/alibabacloud/bssopenapi/model/QueryMonthlyInstanceConsumptionResult.h
	include/alibabacloud/bssopenapi/model/QueryOrdersRequest.h
	include/alibabacloud/bssopenapi/model/QueryOrdersResult.h
	include/alibabacloud/bssopenapi/model/QueryPermissionListRequest.h
	include/alibabacloud/bssopenapi/model/QueryPermissionListResult.h
	include/alibabacloud/bssopenapi/model/QueryPrepaidCardsRequest.h
	include/alibabacloud/bssopenapi/model/QueryPrepaidCardsResult.h
	include/alibabacloud/bssopenapi/model/QueryProductListRequest.h
	include/alibabacloud/bssopenapi/model/QueryProductListResult.h
	include/alibabacloud/bssopenapi/model/QueryRIUtilizationDetailRequest.h
	include/alibabacloud/bssopenapi/model/QueryRIUtilizationDetailResult.h
	include/alibabacloud/bssopenapi/model/QueryRedeemRequest.h
	include/alibabacloud/bssopenapi/model/QueryRedeemResult.h
	include/alibabacloud/bssopenapi/model/QueryRelationListRequest.h
	include/alibabacloud/bssopenapi/model/QueryRelationListResult.h
	include/alibabacloud/bssopenapi/model/QueryResellerAvailableQuotaRequest.h
	include/alibabacloud/bssopenapi/model/QueryResellerAvailableQuotaResult.h
	include/alibabacloud/bssopenapi/model/QueryResourcePackageInstancesRequest.h
	include/alibabacloud/bssopenapi/model/QueryResourcePackageInstancesResult.h
	include/alibabacloud/bssopenapi/model/QuerySavingsPlansDeductLogRequest.h
	include/alibabacloud/bssopenapi/model/QuerySavingsPlansDeductLogResult.h
	include/alibabacloud/bssopenapi/model/QuerySavingsPlansInstanceRequest.h
	include/alibabacloud/bssopenapi/model/QuerySavingsPlansInstanceResult.h
	include/alibabacloud/bssopenapi/model/QuerySettleBillRequest.h
	include/alibabacloud/bssopenapi/model/QuerySettleBillResult.h
	include/alibabacloud/bssopenapi/model/QuerySettlementBillRequest.h
	include/alibabacloud/bssopenapi/model/QuerySettlementBillResult.h
	include/alibabacloud/bssopenapi/model/QuerySplitItemBillRequest.h
	include/alibabacloud/bssopenapi/model/QuerySplitItemBillResult.h
	include/alibabacloud/bssopenapi/model/QueryUserOmsDataRequest.h
	include/alibabacloud/bssopenapi/model/QueryUserOmsDataResult.h
	include/alibabacloud/bssopenapi/model/RefundInstanceRequest.h
	include/alibabacloud/bssopenapi/model/RefundInstanceResult.h
	include/alibabacloud/bssopenapi/model/ReleaseInstanceRequest.h
	include/alibabacloud/bssopenapi/model/ReleaseInstanceResult.h
	include/alibabacloud/bssopenapi/model/RelieveAccountRelationRequest.h
	include/alibabacloud/bssopenapi/model/RelieveAccountRelationResult.h
	include/alibabacloud/bssopenapi/model/RenewInstanceRequest.h
	include/alibabacloud/bssopenapi/model/RenewInstanceResult.h
	include/alibabacloud/bssopenapi/model/RenewResourcePackageRequest.h
	include/alibabacloud/bssopenapi/model/RenewResourcePackageResult.h
	include/alibabacloud/bssopenapi/model/SaveUserCreditRequest.h
	include/alibabacloud/bssopenapi/model/SaveUserCreditResult.h
	include/alibabacloud/bssopenapi/model/SetAllExpirationDayRequest.h
	include/alibabacloud/bssopenapi/model/SetAllExpirationDayResult.h
	include/alibabacloud/bssopenapi/model/SetCreditLabelActionRequest.h
	include/alibabacloud/bssopenapi/model/SetCreditLabelActionResult.h
	include/alibabacloud/bssopenapi/model/SetRenewalRequest.h
	include/alibabacloud/bssopenapi/model/SetRenewalResult.h
	include/alibabacloud/bssopenapi/model/SetResellerUserAlarmThresholdRequest.h
	include/alibabacloud/bssopenapi/model/SetResellerUserAlarmThresholdResult.h
	include/alibabacloud/bssopenapi/model/SetResellerUserQuotaRequest.h
	include/alibabacloud/bssopenapi/model/SetResellerUserQuotaResult.h
	include/alibabacloud/bssopenapi/model/SetResellerUserStatusRequest.h
	include/alibabacloud/bssopenapi/model/SetResellerUserStatusResult.h
	include/alibabacloud/bssopenapi/model/SubscribeBillToOSSRequest.h
	include/alibabacloud/bssopenapi/model/SubscribeBillToOSSResult.h
	include/alibabacloud/bssopenapi/model/TagResourcesRequest.h
	include/alibabacloud/bssopenapi/model/TagResourcesResult.h
	include/alibabacloud/bssopenapi/model/UnsubscribeBillToOSSRequest.h
	include/alibabacloud/bssopenapi/model/UnsubscribeBillToOSSResult.h
	include/alibabacloud/bssopenapi/model/UntagResourcesRequest.h
	include/alibabacloud/bssopenapi/model/UntagResourcesResult.h
	include/alibabacloud/bssopenapi/model/UpgradeResourcePackageRequest.h
	include/alibabacloud/bssopenapi/model/UpgradeResourcePackageResult.h )

set(bssopenapi_src 
	src/BssOpenApiClient.cc
	src/model/AddAccountRelationRequest.cc
	src/model/AddAccountRelationResult.cc
	src/model/AllocateCostUnitResourceRequest.cc
	src/model/AllocateCostUnitResourceResult.cc
	src/model/ApplyInvoiceRequest.cc
	src/model/ApplyInvoiceResult.cc
	src/model/CancelOrderRequest.cc
	src/model/CancelOrderResult.cc
	src/model/ChangeResellerConsumeAmountRequest.cc
	src/model/ChangeResellerConsumeAmountResult.cc
	src/model/ConfirmRelationRequest.cc
	src/model/ConfirmRelationResult.cc
	src/model/ConvertChargeTypeRequest.cc
	src/model/ConvertChargeTypeResult.cc
	src/model/CreateAgAccountRequest.cc
	src/model/CreateAgAccountResult.cc
	src/model/CreateCostUnitRequest.cc
	src/model/CreateCostUnitResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/CreateResellerUserQuotaRequest.cc
	src/model/CreateResellerUserQuotaResult.cc
	src/model/CreateResourcePackageRequest.cc
	src/model/CreateResourcePackageResult.cc
	src/model/CreateSavingsPlansInstanceRequest.cc
	src/model/CreateSavingsPlansInstanceResult.cc
	src/model/DeleteCostUnitRequest.cc
	src/model/DeleteCostUnitResult.cc
	src/model/DescribeInstanceBillRequest.cc
	src/model/DescribeInstanceBillResult.cc
	src/model/DescribePricingModuleRequest.cc
	src/model/DescribePricingModuleResult.cc
	src/model/DescribeResourceCoverageDetailRequest.cc
	src/model/DescribeResourceCoverageDetailResult.cc
	src/model/DescribeResourceCoverageTotalRequest.cc
	src/model/DescribeResourceCoverageTotalResult.cc
	src/model/DescribeResourcePackageProductRequest.cc
	src/model/DescribeResourcePackageProductResult.cc
	src/model/DescribeResourceUsageDetailRequest.cc
	src/model/DescribeResourceUsageDetailResult.cc
	src/model/DescribeResourceUsageTotalRequest.cc
	src/model/DescribeResourceUsageTotalResult.cc
	src/model/DescribeSavingsPlansCoverageDetailRequest.cc
	src/model/DescribeSavingsPlansCoverageDetailResult.cc
	src/model/DescribeSavingsPlansCoverageTotalRequest.cc
	src/model/DescribeSavingsPlansCoverageTotalResult.cc
	src/model/DescribeSavingsPlansUsageDetailRequest.cc
	src/model/DescribeSavingsPlansUsageDetailResult.cc
	src/model/DescribeSavingsPlansUsageTotalRequest.cc
	src/model/DescribeSavingsPlansUsageTotalResult.cc
	src/model/DescribeSplitItemBillRequest.cc
	src/model/DescribeSplitItemBillResult.cc
	src/model/EnableBillGenerationRequest.cc
	src/model/EnableBillGenerationResult.cc
	src/model/GetAccountRelationRequest.cc
	src/model/GetAccountRelationResult.cc
	src/model/GetCustomerAccountInfoRequest.cc
	src/model/GetCustomerAccountInfoResult.cc
	src/model/GetCustomerListRequest.cc
	src/model/GetCustomerListResult.cc
	src/model/GetOrderDetailRequest.cc
	src/model/GetOrderDetailResult.cc
	src/model/GetPayAsYouGoPriceRequest.cc
	src/model/GetPayAsYouGoPriceResult.cc
	src/model/GetResourcePackagePriceRequest.cc
	src/model/GetResourcePackagePriceResult.cc
	src/model/GetSubscriptionPriceRequest.cc
	src/model/GetSubscriptionPriceResult.cc
	src/model/InquiryPriceRefundInstanceRequest.cc
	src/model/InquiryPriceRefundInstanceResult.cc
	src/model/ModifyAccountRelationRequest.cc
	src/model/ModifyAccountRelationResult.cc
	src/model/ModifyCostUnitRequest.cc
	src/model/ModifyCostUnitResult.cc
	src/model/ModifyInstanceRequest.cc
	src/model/ModifyInstanceResult.cc
	src/model/QueryAccountBalanceRequest.cc
	src/model/QueryAccountBalanceResult.cc
	src/model/QueryAccountBillRequest.cc
	src/model/QueryAccountBillResult.cc
	src/model/QueryAccountTransactionDetailsRequest.cc
	src/model/QueryAccountTransactionDetailsResult.cc
	src/model/QueryAccountTransactionsRequest.cc
	src/model/QueryAccountTransactionsResult.cc
	src/model/QueryAvailableInstancesRequest.cc
	src/model/QueryAvailableInstancesResult.cc
	src/model/QueryBillRequest.cc
	src/model/QueryBillResult.cc
	src/model/QueryBillOverviewRequest.cc
	src/model/QueryBillOverviewResult.cc
	src/model/QueryBillToOSSSubscriptionRequest.cc
	src/model/QueryBillToOSSSubscriptionResult.cc
	src/model/QueryCashCouponsRequest.cc
	src/model/QueryCashCouponsResult.cc
	src/model/QueryCostUnitRequest.cc
	src/model/QueryCostUnitResult.cc
	src/model/QueryCostUnitResourceRequest.cc
	src/model/QueryCostUnitResourceResult.cc
	src/model/QueryCustomerAddressListRequest.cc
	src/model/QueryCustomerAddressListResult.cc
	src/model/QueryDPUtilizationDetailRequest.cc
	src/model/QueryDPUtilizationDetailResult.cc
	src/model/QueryEvaluateListRequest.cc
	src/model/QueryEvaluateListResult.cc
	src/model/QueryFinancialAccountInfoRequest.cc
	src/model/QueryFinancialAccountInfoResult.cc
	src/model/QueryInstanceBillRequest.cc
	src/model/QueryInstanceBillResult.cc
	src/model/QueryInstanceByTagRequest.cc
	src/model/QueryInstanceByTagResult.cc
	src/model/QueryInstanceGaapCostRequest.cc
	src/model/QueryInstanceGaapCostResult.cc
	src/model/QueryInvoicingCustomerListRequest.cc
	src/model/QueryInvoicingCustomerListResult.cc
	src/model/QueryMonthlyBillRequest.cc
	src/model/QueryMonthlyBillResult.cc
	src/model/QueryMonthlyInstanceConsumptionRequest.cc
	src/model/QueryMonthlyInstanceConsumptionResult.cc
	src/model/QueryOrdersRequest.cc
	src/model/QueryOrdersResult.cc
	src/model/QueryPermissionListRequest.cc
	src/model/QueryPermissionListResult.cc
	src/model/QueryPrepaidCardsRequest.cc
	src/model/QueryPrepaidCardsResult.cc
	src/model/QueryProductListRequest.cc
	src/model/QueryProductListResult.cc
	src/model/QueryRIUtilizationDetailRequest.cc
	src/model/QueryRIUtilizationDetailResult.cc
	src/model/QueryRedeemRequest.cc
	src/model/QueryRedeemResult.cc
	src/model/QueryRelationListRequest.cc
	src/model/QueryRelationListResult.cc
	src/model/QueryResellerAvailableQuotaRequest.cc
	src/model/QueryResellerAvailableQuotaResult.cc
	src/model/QueryResourcePackageInstancesRequest.cc
	src/model/QueryResourcePackageInstancesResult.cc
	src/model/QuerySavingsPlansDeductLogRequest.cc
	src/model/QuerySavingsPlansDeductLogResult.cc
	src/model/QuerySavingsPlansInstanceRequest.cc
	src/model/QuerySavingsPlansInstanceResult.cc
	src/model/QuerySettleBillRequest.cc
	src/model/QuerySettleBillResult.cc
	src/model/QuerySettlementBillRequest.cc
	src/model/QuerySettlementBillResult.cc
	src/model/QuerySplitItemBillRequest.cc
	src/model/QuerySplitItemBillResult.cc
	src/model/QueryUserOmsDataRequest.cc
	src/model/QueryUserOmsDataResult.cc
	src/model/RefundInstanceRequest.cc
	src/model/RefundInstanceResult.cc
	src/model/ReleaseInstanceRequest.cc
	src/model/ReleaseInstanceResult.cc
	src/model/RelieveAccountRelationRequest.cc
	src/model/RelieveAccountRelationResult.cc
	src/model/RenewInstanceRequest.cc
	src/model/RenewInstanceResult.cc
	src/model/RenewResourcePackageRequest.cc
	src/model/RenewResourcePackageResult.cc
	src/model/SaveUserCreditRequest.cc
	src/model/SaveUserCreditResult.cc
	src/model/SetAllExpirationDayRequest.cc
	src/model/SetAllExpirationDayResult.cc
	src/model/SetCreditLabelActionRequest.cc
	src/model/SetCreditLabelActionResult.cc
	src/model/SetRenewalRequest.cc
	src/model/SetRenewalResult.cc
	src/model/SetResellerUserAlarmThresholdRequest.cc
	src/model/SetResellerUserAlarmThresholdResult.cc
	src/model/SetResellerUserQuotaRequest.cc
	src/model/SetResellerUserQuotaResult.cc
	src/model/SetResellerUserStatusRequest.cc
	src/model/SetResellerUserStatusResult.cc
	src/model/SubscribeBillToOSSRequest.cc
	src/model/SubscribeBillToOSSResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UnsubscribeBillToOSSRequest.cc
	src/model/UnsubscribeBillToOSSResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc
	src/model/UpgradeResourcePackageRequest.cc
	src/model/UpgradeResourcePackageResult.cc )

add_library(bssopenapi ${LIB_TYPE}
	${bssopenapi_public_header}
	${bssopenapi_public_header_model}
	${bssopenapi_src})

set_target_properties(bssopenapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}bssopenapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(bssopenapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_BSSOPENAPI_LIBRARY)
endif()

target_include_directories(bssopenapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(bssopenapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(bssopenapi
		jsoncpp)
	target_include_directories(bssopenapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(bssopenapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(bssopenapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(bssopenapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(bssopenapi
		jsoncpp)
endif()

install(FILES ${bssopenapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/bssopenapi)
install(FILES ${bssopenapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/bssopenapi/model)
install(TARGETS bssopenapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)