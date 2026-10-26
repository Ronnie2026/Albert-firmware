/* Firmware entry: 0x48126cf0 */

char FUN_ram_48126cf0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = 0;
  cVar2 = '\0';
  do {
    pcVar3 = (char *)FUN_ram_48121906(param_2,iVar1);
    if (*pcVar3 == -0x80) {
      cVar2 = cVar2 + '\x01';
    }
    else {
      pcVar3 = (char *)FUN_ram_48121906(param_2,iVar1);
      if (*pcVar3 == -0x40) {
        cVar2 = cVar2 + '\x02';
      }
      else {
        pcVar3 = (char *)FUN_ram_48121906(param_2,iVar1);
        if (*pcVar3 == -0x20) {
          cVar2 = cVar2 + '\x03';
        }
        else {
          pcVar3 = (char *)FUN_ram_48121906(param_2,iVar1);
          if (*pcVar3 == -0x10) {
            cVar2 = cVar2 + '\x04';
          }
          else {
            pcVar3 = (char *)FUN_ram_48121906(param_2,iVar1);
            if (*pcVar3 == -8) {
              cVar2 = cVar2 + '\x05';
            }
            else {
              pcVar3 = (char *)FUN_ram_48121906(param_2,iVar1);
              if (*pcVar3 == -4) {
                cVar2 = cVar2 + '\x06';
              }
              else {
                pcVar3 = (char *)FUN_ram_48121906(param_2,iVar1);
                if (*pcVar3 == -2) {
                  cVar2 = cVar2 + '\a';
                }
                else {
                  pcVar3 = (char *)FUN_ram_48121906(param_2,iVar1);
                  if (*pcVar3 == -1) {
                    cVar2 = cVar2 + '\b';
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return cVar2;
}


