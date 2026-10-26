/* Firmware entry: 0x481667a6 */

void FUN_ram_481667a6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481a3b62("ESP_HTTP_CLIENT_EVENT",param_1,param_2,param_3,2000);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_ram_4ff44d14();
  uVar3 = FUN_ram_480018de(iVar1);
  FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: Failed to post http_client event: %ld, error: %s\n",
                   uVar2,"HTTP_CLIENT",param_1,uVar3);
  return;
}


