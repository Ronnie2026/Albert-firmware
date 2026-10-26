/* Firmware entry: 0x48188728 */

int FUN_ram_48188728(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_40 = 0;
  if (((DAT_ram_4ff6e2a4 == 0) && (iVar1 = FUN_ram_48188614(), iVar1 != 0)) ||
     ((FUN_ram_481a5b64(DAT_ram_4ff6e2a4), param_3 != 5 && (iVar1 = 0x102, param_3 != 4)))) {
    return iVar1;
  }
  uStack_34 = 1;
  uStack_48 = 1;
  local_50 = param_3;
  iStack_4c = param_3;
  iStack_3c = param_3;
  iStack_38 = param_3;
  FUN_ram_481a5970(DAT_ram_4ff6e2a4,&local_50);
  FUN_ram_481a5918(DAT_ram_4ff6e2a8,0,&iStack_40);
  iVar1 = iStack_40 * 0x68;
  *(uint *)(iVar1 + 0x5008a010) = *(uint *)(iVar1 + 0x5008a010) | 1;
  *(uint *)(iVar1 + 0x5008a010) = *(uint *)(iVar1 + 0x5008a010) & 0xfffffffe;
  iVar1 = FUN_ram_4ff20684();
  if (iVar1 != 0) {
    iStack_3c = 0;
    FUN_ram_481a5918(DAT_ram_4ff6e2a4,0,&iStack_3c);
    for (iVar1 = param_1; iVar2 = param_2, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if ((*(int *)(iVar1 + 4) + 0xc0000000U < 0x4000000) ||
         (iVar2 = thunk_FUN_ram_4ff21be8(), iVar2 != 0)) goto LAB_ram_48188826;
    }
    for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      if ((*(int *)(iVar2 + 4) + 0xc0000000U < 0x4000000) ||
         (iVar1 = thunk_FUN_ram_4ff21be8(), iVar1 != 0)) goto LAB_ram_48188826;
    }
    *(uint *)(iStack_40 * 0x68 + 0x5008a010) = *(uint *)(iStack_40 * 0x68 + 0x5008a010) & 0xfffffeff
    ;
    *(uint *)(iStack_3c * 0x68 + 0x5008a148) = *(uint *)(iStack_3c * 0x68 + 0x5008a148) & 0xfffffdff
    ;
  }
LAB_ram_481887c0:
  FUN_ram_4ff305e4(DAT_ram_4ff6e2a4,param_1);
  FUN_ram_4ff305e4(DAT_ram_4ff6e2a8,param_2);
  return 0;
LAB_ram_48188826:
  *(uint *)(iStack_40 * 0x68 + 0x5008a010) = *(uint *)(iStack_40 * 0x68 + 0x5008a010) | 0x100;
  *(uint *)(iStack_3c * 0x68 + 0x5008a148) = *(uint *)(iStack_3c * 0x68 + 0x5008a148) | 0x200;
  goto LAB_ram_481887c0;
}


