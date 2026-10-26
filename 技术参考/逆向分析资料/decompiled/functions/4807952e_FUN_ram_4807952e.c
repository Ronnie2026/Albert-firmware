/* Firmware entry: 0x4807952e */

bool FUN_ram_4807952e(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  iVar3 = DAT_ram_4ff6dc94;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar5 = FUN_ram_48079324(param_1,DAT_ram_4ff6dcc8 + 0x63cf,"download",param_2,&DAT_ram_481c3ddc);
  if (iVar5 != 0) {
    iVar5 = FUN_ram_48129c8a(param_1,"restore_nonce");
    iVar6 = FUN_ram_48129ce8();
    if (((iVar6 != 0) && (*(int *)(iVar5 + 0x10) != 0)) &&
       (iVar5 = FUN_ram_4ff453ae(*(int *)(iVar5 + 0x10),iVar3 + 0x11a5c), iVar5 == 0)) {
      iVar5 = FUN_ram_48129c8a(param_1,"manifest_revision");
      iVar6 = FUN_ram_48129cd6();
      uVar2 = DAT_ram_481f4cbc;
      uVar1 = DAT_ram_481f4cb8;
      if (iVar6 != 0) {
        uVar7 = *(uint *)(iVar5 + 0x1c);
        uVar4 = *(undefined4 *)(iVar5 + 0x18);
        iVar5 = __unorddf2(uVar4,uVar7 & 0x7fffffff,DAT_ram_481f4cb8,DAT_ram_481f4cbc);
        if (((iVar5 == 0) && (iVar5 = __gtdf2(uVar4,uVar7 & 0x7fffffff,uVar1,uVar2), iVar5 < 1)) &&
           ((iVar5 = __ltdf2(uVar4,uVar7,0,0), -1 < iVar5 &&
            (iVar5 = __gtdf2(uVar4,uVar7,DAT_ram_481f4d20,DAT_ram_481f4d24), iVar5 < 1)))) {
          uVar8 = FUN_ram_48196062(uVar4,uVar7);
          iVar5 = __nedf2(uVar4,uVar7,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
          if ((iVar5 == 0) && (lVar9 = FUN_ram_48195bce(uVar4,uVar7), lVar9 != 0)) {
            return lVar9 == *(longlong *)(iVar3 + 0x11b60);
          }
        }
      }
    }
  }
  return false;
}


