/* Firmware entry: 0x4802ab14 */

void FUN_ram_4802ab14(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar5 = *(char *)((int)param_2 + 0xf);
  piVar2 = param_2;
  if (*(char *)((int)param_1 + 0xf) < '\0') {
    piVar1 = param_1;
    if (cVar5 < '\0') {
      uVar3 = *(byte *)((int)param_2 + 0xf) & 0x7f;
      if (0xe < uVar3) goto LAB_ram_4802ac50;
      if ((*(byte *)((int)param_2 + 0xf) & 0x7f) == 0) goto LAB_ram_4802ac1c;
    }
    else {
      uVar3 = param_2[2];
      if (0xe < uVar3) goto LAB_ram_4802ab5a;
      if ((uVar3 == 0) || (piVar2 = (int *)*param_2, (int *)*param_2 == (int *)0x0))
      goto LAB_ram_4802ac1c;
    }
LAB_ram_4802ac00:
    FUN_ram_4ff4522c(piVar1,piVar2);
    if (*(char *)((int)param_2 + 0xf) < '\0') {
      uVar3 = *(byte *)((int)param_2 + 0xf) & 0x7f;
    }
    else {
      uVar3 = param_2[2];
    }
    if (-1 < *(char *)((int)param_1 + 0xf)) {
      piVar1 = (int *)*param_1;
LAB_ram_4802abb0:
      param_1[2] = uVar3;
      if (piVar1 != (int *)0x0) {
        *(undefined1 *)((int)piVar1 + uVar3) = 0;
      }
      FUN_ram_4802a5b4(param_2);
      return;
    }
LAB_ram_4802ac1c:
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)uVar3 & 0x7f;
    *(undefined1 *)(uVar3 + (int)param_1) = 0;
    FUN_ram_4802a5b4(param_2);
    return;
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (cVar5 < '\0') {
      uVar3 = *(byte *)((int)param_2 + 0xf) & 0x7f;
      if (uVar3 <= (uint)param_1[1]) {
        if ((*(byte *)((int)param_2 + 0xf) & 0x7f) == 0) goto LAB_ram_4802abb0;
        goto LAB_ram_4802ac00;
      }
    }
    else {
      uVar3 = param_2[2];
      if (uVar3 <= (uint)param_1[1]) {
        if ((uVar3 == 0) || (piVar2 = (int *)*param_2, (int *)*param_2 == (int *)0x0))
        goto LAB_ram_4802abb0;
        goto LAB_ram_4802ac00;
      }
    }
    thunk_FUN_ram_4ff209c6();
    if (-1 < *(char *)((int)param_1 + 0xf)) {
      *param_1 = 0;
    }
    cVar5 = *(char *)((int)param_2 + 0xf);
  }
  if (cVar5 < '\0') {
LAB_ram_4802ac50:
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) | 0x80;
    FUN_ram_4ff4522c(param_1,param_2,0xf);
    if (*(char *)((int)param_2 + 0xf) < '\0') {
      if (-1 < *(char *)((int)param_1 + 0xf)) goto LAB_ram_4802abd6;
      uVar4 = *(byte *)((int)param_2 + 0xf) & 0x7f;
      uVar3 = uVar4;
    }
    else {
      if (-1 < *(char *)((int)param_1 + 0xf)) goto LAB_ram_4802ab82;
      uVar4 = param_2[2] & 0x7f;
      uVar3 = param_2[2];
    }
    *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x80 | (byte)uVar4;
    *(undefined1 *)(uVar3 + (int)param_1) = 0;
    goto LAB_ram_4802ac94;
  }
LAB_ram_4802ab5a:
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x7f;
  if (*(char *)((int)param_2 + 0xf) < '\0') {
    *param_1 = (int)param_2;
    if (*(char *)((int)param_2 + 0xf) < '\0') goto LAB_ram_4802abd6;
LAB_ram_4802ab82:
    param_1[1] = param_2[1];
    if (-1 < *(char *)((int)param_2 + 0xf)) goto LAB_ram_4802ab8e;
LAB_ram_4802abe2:
    uVar3 = *(byte *)((int)param_2 + 0xf) & 0x7f;
  }
  else {
    *param_1 = *param_2;
    if (-1 < *(char *)((int)param_2 + 0xf)) goto LAB_ram_4802ab82;
LAB_ram_4802abd6:
    param_1[1] = 0xe;
    if (*(char *)((int)param_2 + 0xf) < '\0') goto LAB_ram_4802abe2;
LAB_ram_4802ab8e:
    uVar3 = param_2[2];
  }
  param_1[2] = uVar3;
  if (*param_1 != 0) {
    *(undefined1 *)(*param_1 + uVar3) = 0;
  }
LAB_ram_4802ac94:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(byte *)((int)param_2 + 0xf) = *(byte *)((int)param_2 + 0xf) & 0x7f;
  return;
}


