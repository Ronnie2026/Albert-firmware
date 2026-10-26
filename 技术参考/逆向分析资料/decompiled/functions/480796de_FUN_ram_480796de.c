/* Firmware entry: 0x480796de */

bool FUN_ram_480796de(int param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar4 = FUN_ram_48129cd6();
  uVar2 = DAT_ram_481f4cbc;
  uVar1 = DAT_ram_481f4cb8;
  if (iVar4 == 0) {
    return false;
  }
  uVar5 = *(uint *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  iVar4 = __unorddf2(uVar3,uVar5 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
  if ((iVar4 == 0) && (iVar4 = __gtdf2(uVar3,uVar5 & 0x7fffffff,uVar1,uVar2), iVar4 < 1)) {
    iVar4 = __ltdf2(uVar3,uVar5,0,0);
    if (-1 < iVar4) {
      uVar6 = __floatundidf(param_2,param_3);
      iVar4 = __gtdf2(uVar3,uVar5,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      if (iVar4 < 1) {
        uVar6 = FUN_ram_48196062(uVar3,uVar5);
        iVar4 = __nedf2(uVar3,uVar5,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
        if (iVar4 != 0) {
          return false;
        }
        lVar7 = FUN_ram_48195bce(uVar3,uVar5);
        *param_4 = lVar7;
        return lVar7 != 0;
      }
    }
    return false;
  }
  return false;
}


