/* Firmware entry: 0x4819e82e */

uint FUN_ram_4819e82e(undefined4 param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0xffffffff) {
LAB_ram_4819e83e:
    uVar1 = 0xffffffff;
  }
  else {
    uVar3 = param_3[1];
    *(ushort *)(param_3 + 3) = (ushort)param_3[3] & 0xffdf;
    uVar1 = param_2 & 0xff;
    if (param_3[0xd] == 0) {
      uVar4 = *param_3;
      if (((param_3[4] != 0) && (param_3[4] < uVar4)) && (*(byte *)(uVar4 - 1) == uVar1)) {
        *param_3 = uVar4 - 1;
        param_3[1] = uVar3 + 1;
        return uVar1;
      }
      param_3[0xf] = uVar4;
      param_3[0xd] = (uint)(param_3 + 0x11);
      param_3[0xe] = 3;
      *param_3 = (int)param_3 + 0x46;
      param_3[0x10] = uVar3;
      *(char *)((int)param_3 + 0x46) = (char)param_2;
      uVar3 = 1;
    }
    else {
      if (((int)param_3[0xe] <= (int)uVar3) &&
         (iVar2 = FUN_ram_481a2d88(param_1,param_3), iVar2 != 0)) goto LAB_ram_4819e83e;
      uVar3 = *param_3;
      *param_3 = uVar3 - 1;
      *(char *)(uVar3 - 1) = (char)param_2;
      uVar3 = param_3[1] + 1;
    }
    param_3[1] = uVar3;
  }
  return uVar1;
}


