/* Firmware entry: 0x480762ce */

undefined4 FUN_ram_480762ce(int param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_48129cd6();
  uVar2 = DAT_ram_481f4cbc;
  uVar1 = DAT_ram_481f4cb8;
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar6 = *(uint *)(param_1 + 0x1c);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    iVar4 = __unorddf2(uVar3,uVar6 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
    if ((iVar4 == 0) && (iVar4 = __gtdf2(uVar3,uVar6 & 0x7fffffff,uVar1,uVar2), iVar4 < 1)) {
      iVar4 = __ltdf2(uVar3,uVar6,0,0);
      uVar5 = 0;
      if (-1 < iVar4) {
        uVar7 = __floatundidf(param_2,param_3);
        iVar4 = __gtdf2(uVar3,uVar6,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
        if (iVar4 < 1) {
          uVar7 = FUN_ram_48196062(uVar3,uVar6);
          iVar4 = __nedf2(uVar3,uVar6,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
          if (iVar4 == 0) {
            uVar5 = 1;
            uVar7 = FUN_ram_48195bce(uVar3,uVar6);
            *param_4 = uVar7;
          }
        }
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}


