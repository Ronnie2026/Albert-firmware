/* Firmware entry: 0x4808c696 */

char FUN_ram_4808c696(int *param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((char)param_1[10] == '\0') || (iVar3 = param_1[3], iVar3 == 0)) ||
      (*(char *)((int)param_1 + iVar3 + 0x1b) == '\0')) || (param_2 == (char *)0x0))
  goto LAB_ram_4808c6ca;
  if (*(char *)((int)param_1 + iVar3 + 0xf) == '\0') {
    uVar2 = param_1[2];
    if (((uint)param_1[1] < uVar2) || (param_1[1] - uVar2 < 2)) goto LAB_ram_4808c6ca;
    *(undefined1 *)(*param_1 + uVar2) = 0x2c;
    iVar3 = param_1[2];
    param_1[2] = iVar3 + 1;
    *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
    if ((char)param_1[10] == '\0') goto LAB_ram_4808c6ca;
  }
  uVar2 = param_1[2];
  if ((uVar2 <= (uint)param_1[1]) && (1 < param_1[1] - uVar2)) {
    *(undefined1 *)(*param_1 + uVar2) = 0x22;
    iVar3 = param_1[2];
    param_1[2] = iVar3 + 1;
    *(undefined1 *)(iVar3 + 1 + *param_1) = 0;
    if ((char)param_1[10] != '\0') {
      uVar2 = param_1[1];
      uVar5 = param_1[2];
      if ((uVar5 <= uVar2) && (sVar1 = strlen(param_2), sVar1 < uVar2 - uVar5)) {
        FUN_ram_4ff45158(*param_1 + uVar5,param_2,sVar1);
        iVar3 = param_1[2];
        param_1[2] = sVar1 + iVar3;
        *(undefined1 *)(*param_1 + sVar1 + iVar3) = 0;
        iVar3 = param_1[10];
        if ((char)iVar3 != '\0') {
          uVar2 = param_1[2];
          if ((uVar2 <= (uint)param_1[1]) && (2 < param_1[1] - uVar2)) {
            iVar4 = *param_1;
            *(undefined1 *)(iVar4 + uVar2) = 0x22;
            ((undefined1 *)(iVar4 + uVar2))[1] = 0x3a;
            iVar4 = param_1[2];
            param_1[2] = iVar4 + 2;
            *(undefined1 *)(iVar4 + 2 + *param_1) = 0;
            *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
            return (char)iVar3;
          }
        }
      }
    }
  }
LAB_ram_4808c6ca:
  *(undefined1 *)(param_1 + 10) = 0;
  return '\0';
}


