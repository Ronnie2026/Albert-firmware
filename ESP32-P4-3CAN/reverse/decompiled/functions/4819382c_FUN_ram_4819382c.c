/* Firmware entry: 0x4819382c */

int FUN_ram_4819382c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 8);
  }
  iVar1 = FUN_ram_48193334(param_1,param_4);
  if (iVar1 < 1) {
    uVar2 = FUN_ram_4ff44d14();
    puVar3 = (undefined4 *)FUN_ram_4819bf88();
    uVar4 = FUN_ram_4819b6f4(*puVar3);
    FUN_ram_4ff44bf0(2,"transport_base",
                     "W (%lu) %s: Poll timeout or error, errno=%s, fd=%d, timeout_ms=%d\n",uVar2,
                     "transport_base",uVar4,puVar6[0x1b],param_4);
  }
  else {
    iVar1 = FUN_ram_48191eee(*puVar6,param_2,param_3);
    if (iVar1 < 0) {
      uVar2 = FUN_ram_4ff44d14();
      puVar3 = (undefined4 *)FUN_ram_4819bf88();
      uVar4 = FUN_ram_4819b6f4(*puVar3);
      FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: esp_tls_conn_write error, errno=%s\n",uVar2,
                       "transport_base",uVar4);
      iVar5 = FUN_ram_4819216a(*puVar6,auStack_24);
      if (iVar5 == 0) {
        FUN_ram_481933fa(param_1,auStack_24[0]);
      }
      else {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: Error in obtaining the error handle\n",
                         uVar2,"transport_base");
      }
    }
  }
  return iVar1;
}


