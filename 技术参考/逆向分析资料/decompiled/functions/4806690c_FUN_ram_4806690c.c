/* Firmware entry: 0x4806690c */

void FUN_ram_4806690c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_430 [1044];
  undefined1 uStack_1c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x430) != '\0') {
    return;
  }
  (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 0x434));
  (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 0x438));
  (**(code **)(param_1 + 0xc))(*(undefined4 *)(param_1 + 0x43c));
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0;
  memset(auStack_430,0,0x420);
  uStack_1c = 7;
  FUN_ram_4ff45158(param_1 + 0x10,auStack_430,0x41d);
  *(undefined4 *)(param_1 + 0x46c) = param_2;
  *(undefined4 *)(param_1 + 0x468) = param_2;
  *(undefined4 *)(param_1 + 0x464) = param_2;
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined2 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x430) = 1;
  iVar1 = (**(code **)(param_1 + 8))(0x2001);
  *(int *)(param_1 + 0x434) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  FUN_ram_48065e9c(param_1,7);
  return;
}


