/* Firmware entry: 0x4802ad72 */

undefined4 FUN_ram_4802ad72(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    uVar3 = *(byte *)((int)param_1 + 0xf) & 0x7f;
  }
  else {
    uVar3 = param_1[2];
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 1;
  }
  uVar3 = param_3 + uVar3;
  iVar1 = FUN_ram_4802a79a(param_1,uVar3);
  if (iVar1 != 0) {
    if (*(char *)((int)param_1 + 0xf) < '\0') {
      uVar2 = (*(byte *)((int)param_1 + 0xf) & 0x7f) + (int)param_1;
      puVar4 = param_1;
    }
    else {
      puVar4 = (uint *)*param_1;
      uVar2 = param_1[2] + (int)puVar4;
    }
    if ((param_2 < puVar4) || (uVar2 <= param_2)) {
      FUN_ram_4ff45158(uVar2,param_2,param_3);
    }
    else {
      FUN_ram_4ff4522c(uVar2,param_2,param_3);
    }
    if (*(char *)((int)param_1 + 0xf) < '\0') {
      *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)uVar3 & 0x7f;
      *(undefined1 *)((int)param_1 + uVar3) = 0;
    }
    else {
      param_1[2] = uVar3;
      if (*param_1 != 0) {
        *(undefined1 *)(*param_1 + uVar3) = 0;
      }
    }
    return 1;
  }
  return 0;
}


