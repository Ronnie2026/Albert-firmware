/* Firmware entry: 0x4815fd2a */

undefined4 FUN_ram_4815fd2a(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = (uint)(byte)param_2[1];
  puVar2 = param_2 + 2;
  if (param_1 == 0) {
    FUN_ram_4819a582(param_3,"TUPLE: unknown(%02X), size: %d: ",*param_2,uVar3);
  }
  else {
    FUN_ram_4819a582(param_3,"TUPLE: %s, size: %d: ",*(undefined4 *)(param_1 + 4),uVar3);
  }
  if (uVar3 != 0) {
    do {
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      FUN_ram_4819a582(param_3,"%02X ",uVar1);
    } while (param_2 + uVar3 + 2 != puVar2);
  }
  FUN_ram_4819a620(10,param_3);
  return 0;
}


