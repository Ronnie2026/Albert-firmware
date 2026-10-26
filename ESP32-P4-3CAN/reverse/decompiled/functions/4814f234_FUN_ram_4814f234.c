/* Firmware entry: 0x4814f234 */

int FUN_ram_4814f234(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char cStack_3d;
  int iStack_3c;
  int aiStack_38 [9];
  int *piStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 == (int *)0x0) || (*param_2 = 0, param_1 == 0)) {
    return -0x10;
  }
  FUN_ram_4814e762();
  cVar1 = *(char *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_ram_4814e79e();
  if (cVar1 != 0) {
    return (int)cVar1;
  }
  if ((*(int *)(param_1 + 0x14) != 0) && ((*(byte *)(param_1 + 0x30) & 9) == 0)) {
    cStack_3d = cVar1;
    FUN_ram_4814e762();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    FUN_ram_4814e79e();
    if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
      iVar2 = FUN_ram_4814e562(param_1 + 0x14,&iStack_3c,*(undefined4 *)(param_1 + 0x24));
      if (iVar2 == -1) {
        FUN_ram_4814e762();
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        FUN_ram_4814e79e();
        return -3;
      }
    }
    else {
      iVar2 = FUN_ram_4814e5f6(param_1 + 0x14,&iStack_3c);
      if (iVar2 == -1) {
        FUN_ram_4814e762();
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
        FUN_ram_4814e79e();
        return -7;
      }
    }
    FUN_ram_4814e762();
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    FUN_ram_4814e79e();
    if (((*(byte *)(param_1 + 0x30) & 8) != 0) && (iVar2 = FUN_ram_48150764(iStack_3c), iVar2 != 0))
    {
      return -0xb;
    }
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      (**(code **)(param_1 + 0x38))(param_1,1,0);
    }
    iVar2 = FUN_ram_48150774(iStack_3c,&cStack_3d);
    if (iVar2 != 0) {
      return (int)cStack_3d;
    }
    if (iStack_3c != 0) {
      aiStack_38[0] = iStack_3c;
      piStack_14 = (int *)FUN_ram_4814e840();
      if ((piStack_14 != (int *)0x0) && (*piStack_14 != 0)) {
        FUN_ram_481378ce(FUN_ram_4815131e,aiStack_38,piStack_14);
      }
      *param_2 = iStack_3c;
      return 0;
    }
  }
  return -0xf;
}


