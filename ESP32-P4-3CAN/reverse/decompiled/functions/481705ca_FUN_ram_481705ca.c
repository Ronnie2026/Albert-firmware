/* Firmware entry: 0x481705ca */

uint FUN_ram_481705ca(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1[9] == 0) && (param_1[10] == 0)) ||
     (0x414dU - (param_1[0x1a] - param_1[0x18]) < param_2)) {
    uVar3 = 0xffff8f00;
  }
  else {
    uVar3 = param_1[0x21];
    while (uVar3 < param_2) {
      uVar1 = param_2 - uVar3;
      if ((code *)param_1[0x17] != (code *)0x0) {
        iVar2 = (*(code *)param_1[0x17])(param_1[0x15]);
        if (iVar2 == 2) {
          return 0xffff9800;
        }
        uVar3 = param_1[0x21];
      }
      if ((code *)param_1[10] == (code *)0x0) {
        uVar3 = (*(code *)param_1[9])(param_1[0xb],param_1[0x1a] + uVar3,uVar1);
      }
      else {
        uVar3 = (*(code *)param_1[10])
                          (param_1[0xb],param_1[0x1a] + uVar3,uVar1,*(undefined4 *)(*param_1 + 0x6c)
                          );
      }
      if (uVar3 == 0) {
        return 0xffff8d80;
      }
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      if (uVar1 < uVar3) {
        return 0xffff9400;
      }
      uVar3 = uVar3 + param_1[0x21];
      param_1[0x21] = uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


