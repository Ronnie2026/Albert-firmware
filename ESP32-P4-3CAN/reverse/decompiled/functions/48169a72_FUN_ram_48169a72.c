/* Firmware entry: 0x48169a72 */

undefined4 FUN_ram_48169a72(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == DAT_ram_4ff6d438) {
    DAT_ram_4ff6d438 = 0;
  }
  if (param_1 == DAT_ram_4ff6d43c) {
    DAT_ram_4ff6d43c = 0;
  }
  if (DAT_ram_4ff6d440 == param_1) {
    DAT_ram_4ff6d440 = 0;
  }
  if (((DAT_ram_4ff6d438 == 0) && (DAT_ram_4ff6d43c == 0)) && (DAT_ram_4ff6d440 == 0)) {
    FUN_ram_481698e2();
  }
  uVar1 = FUN_ram_48158826(param_1);
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uVar2 = FUN_ram_48158ac6(param_1,&uStack_24);
  FUN_ram_48169cfa(uVar1);
  return uVar2;
}


