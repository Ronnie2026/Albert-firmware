/* Firmware entry: 0x48032378 */

uint FUN_ram_48032378(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"amb_light",0,0);
  if (iVar2 != 0) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_ram_4819ad74(&uStack_2c,10,"a%08lx",param_1);
    iVar3 = FUN_ram_48122736(&DAT_ram_4ff6dec8,&uStack_2c);
    if (iVar3 != 0) {
      iVar2 = FUN_ram_48122164(&DAT_ram_4ff6dec8,&uStack_2c);
    }
    FUN_ram_48122142(&DAT_ram_4ff6dec8);
  }
  iVar3 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"amb_light2",0,0);
  if (iVar3 != 0) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_ram_4819ad74(&uStack_2c,10,"a%08lx",param_1);
    iVar7 = FUN_ram_48122736(&DAT_ram_4ff6dec8,&uStack_2c);
    if (iVar7 != 0) {
      iVar3 = FUN_ram_48122164(&DAT_ram_4ff6dec8,&uStack_2c);
    }
    FUN_ram_48122142(&DAT_ram_4ff6dec8);
  }
  uVar4 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"amb_light3",0,0);
  if (uVar4 != 0) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_ram_4819ad74(&uStack_2c,10,"a%08lx",param_1);
    iVar7 = FUN_ram_48122736(&DAT_ram_4ff6dec8,&uStack_2c);
    if (iVar7 != 0) {
      uVar4 = FUN_ram_48122164(&DAT_ram_4ff6dec8,&uStack_2c);
    }
    FUN_ram_48122142(&DAT_ram_4ff6dec8);
  }
  uVar5 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"amb_light4",0,0);
  if (uVar5 != 0) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_ram_4819ad74(&uStack_2c,10,"a%08lx",param_1);
    iVar7 = FUN_ram_48122736(&DAT_ram_4ff6dec8,&uStack_2c);
    if (iVar7 != 0) {
      uVar5 = FUN_ram_48122164(&DAT_ram_4ff6dec8,&uStack_2c);
    }
    FUN_ram_48122142(&DAT_ram_4ff6dec8);
  }
  uVar6 = FUN_ram_48121fee(&DAT_ram_4ff6dec8,"amb_light5",0,0);
  if (uVar6 != 0) {
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_ram_4819ad74(&uStack_2c,10,"a%08lx",param_1);
    iVar7 = FUN_ram_48122736(&DAT_ram_4ff6dec8,&uStack_2c);
    if (iVar7 != 0) {
      uVar6 = FUN_ram_48122164(&DAT_ram_4ff6dec8,&uStack_2c);
    }
    FUN_ram_48122142(&DAT_ram_4ff6dec8);
  }
  uVar1 = 0;
  if ((iVar2 != 0) && (uVar1 = 0, iVar3 != 0)) {
    uVar1 = uVar6 & uVar5 & uVar4 & 0xff;
  }
  return uVar1;
}


