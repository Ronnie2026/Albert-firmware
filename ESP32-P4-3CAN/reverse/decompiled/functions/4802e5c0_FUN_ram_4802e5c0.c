/* Firmware entry: 0x4802e5c0 */

void FUN_ram_4802e5c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uVar1 = FUN_ram_4ff2d260();
  uVar2 = FUN_ram_4ff2d260();
  uVar3 = FUN_ram_4ff2d260();
  uVar4 = FUN_ram_4ff2d260();
  FUN_ram_4819ad74(&uStack_34,0x21,"%08lx%08lx%08lx%08lx",uVar1,uVar2,uVar3,uVar4);
  FUN_ram_4802ad46(&DAT_ram_4ff5c54c,&uStack_34);
  return;
}


