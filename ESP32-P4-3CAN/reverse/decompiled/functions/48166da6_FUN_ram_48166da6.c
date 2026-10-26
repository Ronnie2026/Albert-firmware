/* Firmware entry: 0x48166da6 */

undefined4 FUN_ram_48166da6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  iVar3 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar3 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  if (iVar1 != 0) {
    thunk_FUN_ram_4ff209c6();
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    thunk_FUN_ram_4ff209c6();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_ram_48191058(*(undefined4 *)(param_1 + 0x10),1);
  if (((*(int *)(param_1 + 0x58) == 0) || (*(int *)(param_1 + 0x70) != 1)) ||
     (iVar1 = FUN_ram_48168d3c(*(int *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c)), iVar1 == 0
     )) {
    return 0;
  }
  if ((*(int **)(param_1 + 0x20) != (int *)0x0) && (iVar3 = **(int **)(param_1 + 0x20), iVar3 != 0))
  {
    iVar3 = FUN_ram_4816901a(iVar3,"Authorization",iVar1);
    uVar2 = 0;
    if (iVar3 == 0) goto LAB_ram_48166e28;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"HTTP_CLIENT","E (%lu) %s: %s(%d): Failed to set Authorization header\n",uVar2,
                   "HTTP_CLIENT","esp_http_client_prepare_basic_auth",0x27a);
  uVar2 = 0xffffffff;
LAB_ram_48166e28:
  thunk_FUN_ram_4ff209c6(iVar1);
  return uVar2;
}


