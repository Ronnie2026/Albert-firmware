/* Firmware entry: 0x480c8ec2 */

void FUN_ram_480c8ec2(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)((int)param_2 + 6) == '\0') {
    return;
  }
  if ((char)param_2[1] == '\0') {
    if (((param_2[4] != 0 || param_2[5] != 0) && (param_2[6] != 0)) && ((short)param_2[7] != -1)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    FUN_ram_4ff3ec14(param_1 + 0x28,0xffffffff);
    uVar3 = *(uint *)(param_1 + 0x30);
    FUN_ram_4ff3ee10(param_1 + 0x28);
    if ((uVar3 & 2) != 0) {
      FUN_ram_4ff3ec14(*(undefined4 *)(param_1 + 8),0xffffffff);
      iVar2 = *(int *)(param_1 + 4);
      if ((byte)(*(char *)((int)param_2 + 5) - 1U) < 2) {
        *(undefined4 *)(iVar2 + 0x84c) = param_3;
        *(int *)(iVar2 + 0x840) = *(int *)(iVar2 + 0x840) + 1;
      }
      else {
        *(int *)(iVar2 + 0x844) = *(int *)(iVar2 + 0x844) + 1;
      }
      FUN_ram_4ff3ee10(*(undefined4 *)(param_1 + 8));
      return;
    }
    return;
  }
  if (((char)param_2[1] != '\x02') || (*param_2 == 0)) {
    return;
  }
  uVar1 = 1;
  if (*(char *)((int)param_2 + 9) == '\0') {
    if (*(char *)((int)param_2 + 7) == '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if ((char)param_2[2] != '\0') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (*(char *)((int)param_2 + 5) == '\x05') {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (((param_2[4] != 0 || param_2[5] != 0) && (param_2[6] != 0)) && ((short)param_2[7] != -1)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    uVar1 = 0;
  }
  FUN_ram_480c80ca(param_1,*param_2,uVar1,param_3);
  return;
}


