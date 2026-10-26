/* Firmware entry: 0x480a6348 */

bool FUN_ram_480a6348(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_48129c8a();
  iVar5 = FUN_ram_48129cd6();
  uVar1 = DAT_ram_481f4cbc;
  uVar6 = DAT_ram_481f4cb8;
  bVar7 = false;
  if (iVar5 != 0) {
    uVar3 = *(uint *)(iVar4 + 0x1c);
    uVar2 = *(undefined4 *)(iVar4 + 0x18);
    iVar4 = __unorddf2(uVar2,uVar3 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
    if ((iVar4 != 0) || (iVar4 = __gtdf2(uVar2,uVar3 & 0x7fffffff,uVar6,uVar1), 0 < iVar4)) {
      return false;
    }
    iVar4 = __ltdf2(uVar2,uVar3,0,0);
    bVar7 = false;
    if (-1 < iVar4) {
      uVar8 = __floatundidf(param_3,param_4);
      iVar4 = __gtdf2(uVar2,uVar3,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      if (iVar4 < 1) {
        uVar8 = FUN_ram_48196062(uVar2,uVar3);
        iVar4 = __nedf2(uVar2,uVar3,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
        bVar7 = iVar4 == 0;
        if (bVar7) {
          uVar6 = FUN_ram_48195bce(uVar2,uVar3);
          *param_5 = uVar6;
        }
      }
    }
  }
  return bVar7;
}


