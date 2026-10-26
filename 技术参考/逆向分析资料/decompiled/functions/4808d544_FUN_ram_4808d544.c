/* Firmware entry: 0x4808d544 */

char FUN_ram_4808d544(int *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uStack_12;
  char acStack_11 [9];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4802ed9c(&uStack_12,acStack_11);
  if (iVar1 == 0) {
    return '\0';
  }
  if (((char)param_1[10] != '\0') && (param_1[3] == 0)) {
    uVar3 = param_1[2];
    if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
      *(undefined1 *)(*param_1 + uVar3) = 0x7b;
      iVar1 = param_1[2];
      param_1[2] = iVar1 + 1;
      *(undefined1 *)(iVar1 + 1 + *param_1) = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 7) = 1;
      param_1[3] = 1;
      goto LAB_ram_4808d572;
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
LAB_ram_4808d572:
  FUN_ram_4808c2dc(param_1,&DAT_ram_481c4274,1);
  FUN_ram_4808c2dc(param_1,"completed",uStack_12);
  if (acStack_11[0] == '\x02') {
    pcVar2 = "new";
    uVar4 = 3;
  }
  else if (acStack_11[0] == '\x03') {
    pcVar2 = "restored";
    uVar4 = 8;
  }
  else if (acStack_11[0] == '\x01') {
    pcVar2 = "later";
    uVar4 = 5;
  }
  else {
    pcVar2 = "none";
    uVar4 = 4;
  }
  FUN_ram_4808c96e(param_1,"choice",pcVar2,uVar4);
  iVar1 = thunk_FUN_ram_48124e22(&DAT_ram_4ff6c118);
  FUN_ram_4808c2dc(param_1,"wifi_connected",iVar1 == 3);
  if ((((char)param_1[10] != '\0') && (1 < (uint)param_1[3])) &&
     (*(char *)((int)param_1 + param_1[3] + 0x1bU) != '\0')) {
    uVar3 = param_1[2];
    if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
      *(undefined1 *)(*param_1 + uVar3) = 0x7d;
      iVar1 = param_1[2];
      param_1[2] = iVar1 + 1;
      *(undefined1 *)(iVar1 + 1 + *param_1) = 0;
      iVar1 = param_1[3];
      param_1[3] = iVar1 + -1;
      if (((char)param_1[10] != '\0') &&
         ((iVar1 + -1 == 1 && (iVar1 = param_1[7], (char)iVar1 != '\0')))) {
        uVar3 = param_1[2];
        if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
          *(undefined1 *)(*param_1 + uVar3) = 0x7d;
          iVar5 = param_1[2];
          param_1[2] = iVar5 + 1;
          *(undefined1 *)(iVar5 + 1 + *param_1) = 0;
          param_1[3] = 0;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return (char)iVar1;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 10) = 0;
  return '\0';
}


