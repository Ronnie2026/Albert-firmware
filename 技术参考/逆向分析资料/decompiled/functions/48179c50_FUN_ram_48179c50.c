/* Firmware entry: 0x48179c50 */

int FUN_ram_48179c50(int param_1,code *param_2,undefined4 param_3,int param_4,int param_5,
                    int param_6,int param_7,byte *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint __n;
  byte *pbVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == 0) {
    if ((param_5 != 0) && (param_6 == 0)) {
      return -0x4080;
    }
    if (param_2 == (code *)0x0) {
      return -0x4080;
    }
    __n = *(uint *)(param_1 + 4);
  }
  else {
    if (param_6 == 0) {
      return -0x4080;
    }
    if (param_2 == (code *)0x0) {
      return -0x4080;
    }
    __n = *(uint *)(param_1 + 4);
    FUN_ram_4817697e(param_4);
    iVar1 = FUN_ram_48176d4c();
    if (iVar1 == 0) {
      return -0x4080;
    }
    if (param_5 != iVar1) {
      return -0x4080;
    }
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    param_4 = *(int *)(param_1 + 0x74);
  }
  FUN_ram_4817697e(param_4);
  iVar1 = FUN_ram_48176d4c();
  if (iVar1 != 0) {
    if (param_7 == -1) {
      if ((uint)(iVar1 * 2) <= __n) {
        param_7 = iVar1;
        if (__n < iVar1 * 2 + 2U) {
          param_7 = (__n - 2) - iVar1;
        }
        goto LAB_ram_48179cd0;
      }
    }
    else if ((-1 < param_7) && ((uint)(param_7 + 2 + iVar1) <= __n)) {
LAB_ram_48179cd0:
      memset(param_8,0,__n);
      iVar2 = FUN_ram_4818006c(param_1 + 8);
      pbVar6 = param_8 + (((__n - iVar1) + -2) - param_7) + 1;
      param_8[((__n - iVar1) + -2) - param_7] = 1;
      iVar3 = (*param_2)(param_3,pbVar6,param_7);
      if (iVar3 != 0) {
        return iVar3 + -0x4480;
      }
      pbVar5 = pbVar6 + param_7;
      iVar3 = FUN_ram_48178c42(param_6,param_5,pbVar6,param_7,pbVar5,param_4);
      if (iVar3 == 0) {
        uVar4 = (uint)((iVar2 - 1U & 7) == 0);
        iVar2 = FUN_ram_48178b3a(param_8 + uVar4,((__n - iVar1) + -1) - uVar4,pbVar5,iVar1,param_4);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_4818006c(param_1 + 8);
          *param_8 = (byte)(0xff >> ((__n * 8 + 1) - iVar2 & 0x1f)) & *param_8;
          pbVar5[iVar1] = 0xbc;
          iVar1 = FUN_ram_481796e2(param_1,param_2,param_3,param_8,param_8);
          return iVar1;
        }
        return iVar2;
      }
      return iVar3;
    }
  }
  return -0x4080;
}


