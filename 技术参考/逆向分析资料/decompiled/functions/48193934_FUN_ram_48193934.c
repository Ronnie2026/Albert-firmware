/* Firmware entry: 0x48193934 */

uint FUN_ram_48193934(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 8);
  }
  iVar1 = FUN_ram_48193328(param_1,param_4);
  if (iVar1 == -1) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_ram_48191ee0(*puVar6,param_2,param_3);
      if ((int)uVar2 < 0) {
        uVar3 = FUN_ram_4ff44d14();
        puVar4 = (undefined4 *)FUN_ram_4819bf88();
        uVar5 = FUN_ram_4819b6f4(*puVar4);
        FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: esp_tls_conn_read error, errno=%s\n",uVar3,
                         "transport_base",uVar5);
        uVar2 = uVar2 & -(uint)((uVar2 + 0x6900 & 0xfffffeff) != 0);
        iVar1 = FUN_ram_4819216a(*puVar6,auStack_24);
        if (iVar1 == 0) {
          FUN_ram_481933fa(param_1,auStack_24[0]);
        }
        else {
          uVar3 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"transport_base","E (%lu) %s: Error in obtaining the error handle\n",
                           uVar3,"transport_base");
        }
      }
      else if (uVar2 == 0) {
        if (iVar1 < 1) {
          uVar2 = 0xffffffff;
        }
        else {
          FUN_ram_481933b4(param_1,0xffffffff);
          uVar2 = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}


