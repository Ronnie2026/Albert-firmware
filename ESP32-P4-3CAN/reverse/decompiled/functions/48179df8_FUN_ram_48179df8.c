/* Firmware entry: 0x48179df8 */

int FUN_ram_48179df8(int param_1,code *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,undefined4 param_7,undefined1 *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint __n;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (code *)0x0) {
    return -0x4080;
  }
  FUN_ram_4817697e(*(undefined4 *)(param_1 + 0x74));
  iVar1 = FUN_ram_48176d4c();
  if (iVar1 != 0) {
    uVar3 = param_6 + 2 + iVar1 * 2;
    __n = *(uint *)(param_1 + 4);
    if ((param_6 <= uVar3) && (uVar3 <= __n)) {
      memset(param_8,0,__n);
      puVar5 = param_8 + 1;
      *param_8 = 0;
      iVar2 = (*param_2)(param_3,puVar5,iVar1);
      if (iVar2 != 0) {
        return iVar2 + -0x4480;
      }
      puVar6 = puVar5 + iVar1;
      iVar2 = FUN_ram_4817697e(*(undefined4 *)(param_1 + 0x74));
      if (iVar2 != 0) {
        iVar2 = FUN_ram_48176cf2(iVar2,param_4,param_5,puVar6);
        if (iVar2 != 0) {
          return iVar2;
        }
        puVar6[((__n - param_6) + -2) - iVar1] = 1;
        if (param_6 != 0) {
          FUN_ram_4ff45158(puVar6 + (((__n - param_6) + -2) - iVar1) + 1,param_7,param_6);
        }
        iVar4 = (__n - 1) - iVar1;
        iVar2 = FUN_ram_48178b3a(param_8 + iVar1 + 1,iVar4,puVar5,iVar1,
                                 *(undefined4 *)(param_1 + 0x74));
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar1 = FUN_ram_48178b3a(puVar5,iVar1,param_8 + iVar1 + 1,iVar4,
                                 *(undefined4 *)(param_1 + 0x74));
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = FUN_ram_48179632(param_1,param_8,param_8);
        return iVar1;
      }
    }
  }
  return -0x4080;
}


