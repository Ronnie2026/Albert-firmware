/* Firmware entry: 0x4808c2dc */

void FUN_ram_4808c2dc(int *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((((char)param_1[10] == '\0') || (iVar4 = param_1[3], iVar4 == 0)) ||
      (*(char *)((int)param_1 + iVar4 + 0x1b) == '\0')) || (param_2 == (char *)0x0))
  goto LAB_ram_4808c316;
  if (*(char *)((int)param_1 + iVar4 + 0xf) == '\0') {
    uVar3 = param_1[2];
    if (((uint)param_1[1] < uVar3) || (param_1[1] - uVar3 < 2)) goto LAB_ram_4808c316;
    *(undefined1 *)(*param_1 + uVar3) = 0x2c;
    iVar4 = param_1[2];
    param_1[2] = iVar4 + 1;
    *(undefined1 *)(iVar4 + 1 + *param_1) = 0;
    if ((char)param_1[10] == '\0') goto LAB_ram_4808c316;
  }
  uVar3 = param_1[2];
  if ((uVar3 <= (uint)param_1[1]) && (1 < param_1[1] - uVar3)) {
    *(undefined1 *)(*param_1 + uVar3) = 0x22;
    iVar4 = param_1[2];
    param_1[2] = iVar4 + 1;
    *(undefined1 *)(iVar4 + 1 + *param_1) = 0;
    if ((char)param_1[10] != '\0') {
      uVar3 = param_1[1];
      uVar5 = param_1[2];
      if ((uVar5 <= uVar3) && (sVar1 = strlen(param_2), sVar1 < uVar3 - uVar5)) {
        FUN_ram_4ff45158(*param_1 + uVar5,param_2,sVar1);
        iVar4 = param_1[2];
        param_1[2] = sVar1 + iVar4;
        *(undefined1 *)(*param_1 + sVar1 + iVar4) = 0;
        if ((char)param_1[10] != '\0') {
          uVar3 = param_1[2];
          if ((uVar3 <= (uint)param_1[1]) && (2 < param_1[1] - uVar3)) {
            iVar4 = *param_1;
            *(undefined1 *)(iVar4 + uVar3) = 0x22;
            ((undefined1 *)(iVar4 + uVar3))[1] = 0x3a;
            iVar4 = param_1[2];
            param_1[2] = iVar4 + 2;
            *(undefined1 *)(iVar4 + 2 + *param_1) = 0;
            *(undefined1 *)((int)param_1 + param_1[3] + 0xf) = 0;
            if (param_3 == 0) {
              pcVar2 = "false";
              uVar3 = 5;
            }
            else {
              pcVar2 = "true";
              uVar3 = 4;
            }
            if ((char)param_1[10] != '\0') {
              uVar5 = param_1[2];
              if ((uVar5 <= (uint)param_1[1]) && (uVar3 < param_1[1] - uVar5)) {
                FUN_ram_4ff45158(*param_1 + uVar5,pcVar2,uVar3);
                iVar4 = param_1[2];
                param_1[2] = uVar3 + iVar4;
                *(undefined1 *)(*param_1 + uVar3 + iVar4) = 0;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_ram_4808c316:
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


